#!/bin/bash
GRN='\033[1;32m'
BLU='\033[1;34m'
NORM='\033[0m'

buildfolder="build"
sourcefolder=$(realpath .)
tests=(
#	"rtl#functional_test_basic"
#   	"rtl#functional_test_threshold"
#     	"rtl#functional_test_priority"
#	"sysc_plic_rtl#functional_test_basic"
#	"sysc_plic_rtl#functional_test_threshold"
#	"sysc_plic_rtl#functional_test_priority"
#	"sysc_comp#comparison_priority"
#	"sysc_comp#comparison_threshold"
#	"plic#functional_test_basic"
#	"plic#functional_test_consider_threshold"
#	"plic#functional_test_priority_direct"
#	"plic#interface_test_read"
#	"plic#interface_test_write"
#	"gcd#functional_tlm_basic"
#	"gcd#functional_rtl_basic"
#	"hash#comparison_basic"
#	"comp#comparison_priority"
#	"comp#comparison_threshold"
#       "plic#interface_test_read"
       "sysc_plic#interface_test_write"
#	"rtl#interface_test_write"
#	"rtl#interface_test_read"
#	"gcd#interface_tlm_write"
#	"gcd#interface_tlm_read"
#	"gcd#interface_rtl_write"
#	"gcd#interface_rtl_read"
#        "hash#interface_tlm_write"
#        "hash#interface_tlm_read"
#        "hash#interface_rtl_write"
#        "hash#interface_rtl_read"
#        "map#interface_tlm_write"
#        "map#interface_tlm_read"
#        "map#interface_rtl_write"
#        "map#interface_rtl_read"
)

today=$(date +"%Y-%m-%d-%H.%M")
testfolder_base=test/$today
klee_args=(
		"--libcxx"
		"--libc=uclibc"
		"-posix-runtime"
		"-only-output-states-covering-new"
		"-max-memory=4000"	#default: 2000 -> 2GB
		#"--emit-all-errors=1"
		#"--use-query-log=solver:kquery"
#    "--log-partial-queries-early=true"
		#"--optimize"
		#"--max-memory=1000"
		"--max-time=24h"
		"--max-solver-time=120s"
		"--watchdog"
		"--search=bfs"
		"--const-array-threshold=4"
)

echo "Today is $today, writing to $testfolder_base"
#	rm -r "$testfolder/*" 2> /dev/null
mkdir -p $testfolder_base 2> /dev/null

make -s -C $buildfolder clean
i=0 #lol
for test in ${tests[@]}
do
	base_name=$(echo $test | cut -d "#" -f1)
	subtype=$(echo $test | cut -d "#" -s -f2)
	testfolder=$testfolder_base/$test
	mkdir $testfolder
	echo "Building testbench_$base_name"
	make -C $buildfolder testbench_$base_name --no-print-directory
	echo -e "${BLU}Running test $base_name ($subtype)$NORM"
	klee_target_folder[${i}]="$testfolder"
	#rm -rf klee_folder[${i}]
				args="${klee_args[*]} $buildfolder/testbench_${base_name}"
	echo "klee --output-dir=${klee_target_folder[${i}]}/klee-run ${args} $subtype > $testfolder/run.log"
	{ time klee --output-dir=${klee_target_folder[${i}]}/klee-run ${args} $subtype ; } > "$testfolder/run.log" 2>&1 &
	 klee_pid[${i}]=$!
	sleep 1
	 echo "$base_name ($subtype) running as ${klee_pid[${i}]} into ${klee_folder[${i}]}"
#	echo -e "${GRN}${tests[${i}]} finished.$NORM"
	i=$[i + 1]
done

echo "All processes started. Waiting for processes to finish..."

for ((i=0;i<${#tests[@]};i++)); do
		echo "waiting for PID ${klee_pid[${i}]} (${tests[${i}]})..."
		wait "${klee_pid[${i}]}"
		echo -e "${GRN}${tests[${i}]} finished.$NORM"
		# copy temporary result folder into outputfolder
		#mv "${klee_folder[${i}]}" "${klee_target_folder[${i}]}"
done

end_stats=$testfolder_base/klee-stat.log

klee-stats --print-more "$testfolder_base"/* > "$end_stats"
#tail $testfolder_base/*/run.log >> $testfolder_base/klee-stat.log

for ((i=0;i<${#tests[@]};i++)); do
		echo >> "$end_stats"
		echo "${klee_target_folder[${i}]}/run.log found errors: " >> "$end_stats"
		cat "${klee_target_folder[${i}]}/run.log" | grep ERROR >> "$end_stats"
		tail -n 8 "${klee_target_folder[${i}]}/run.log" >> "$end_stats"
done

cat $testfolder_base/klee-stat.log
