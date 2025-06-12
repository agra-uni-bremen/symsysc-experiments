#!/bin/bash
GRN='\033[1;32m'
BLU='\033[1;34m'
NORM='\033[0m'

buildfolder="build"
sourcefolder=$(realpath .)
tests=()
hashtlmnumbers=(
#	0 1 2 3 4 724 760 796 832 364 184 544 892 896 900 868 880 902 85 489 589 201 901 885 1695 1623 1659 1731 903 1263 1083 1443 1791 1795 1799 1767 1779 1801 1136 1272 992 1560 1460 1800 1803 1805 1807 1808 1816 1817
)
#hashtlmnumbers=(1767 1779 489 589 201 901 885 1272 992 1560 1460 1800) # hatte zwei vergessen. sind oben jetzt mit drin, muss für crossym-hash-tlm und hwklee-hash-tlm noch
for number in "${hashtlmnumbers[@]}"
do
        tests+=("hash_mutate_tlm${number}#functional_tlm_basic")
        tests+=("hash_mutate_tlm${number}#comparison_basic")
done
hashrtlnumbers=(
# 12 13 122 123 124 126 127 130 131 160 163 142 151 168 169 196 193 190 172 181 222 200 312 317 321 322 325 327 329 333 336 340 344 346 348 350 352 355 361 362 377 381 382 386 389 390 392 394 407 419
)
#hashrtlnumbers=(352) # vergessen
for number in "${hashrtlnumbers[@]}"
do
        tests+=("hash_mutate_rtl${number}#functional_rtl_basic")
        tests+=("hash_mutate_rtl${number}#comparison_basic")
done

maptlmnumbers=(
#0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 27 28 29 30 31 32 33 34 41 42
)
for number in "${maptlmnumbers[@]}"
do
        tests+=("map_mutate_tlm${number}#functional_tlm_basic")
        tests+=("map_mutate_tlm${number}#comparison_basic")
done

maprtlnumbers=(
# 36 14 62 40 69 75 64 224 225 228 229 230 231 269 270 271 272 273 274 275 276 280 308 306 305 300 284 293 294 309 310 311 312 316 317 318 319 320 327 401 379 431 432 433 435 436 437 >
)
for number in "${maprtlnumbers[@]}"
do
        tests+=("map_mutate_rtl${number}#functional_rtl_basic")
        tests+=("map_mutate_rtl${number}#comparison_basic")
done

gcdtlmnumbers=(
# 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 17 19 21 22 30 31
)
for number in "${gcdtlmnumbers[@]}"
do
        tests+=("gcd_mutate_tlm${number}#functional_tlm_basic")
        tests+=("gcd_mutate_tlm${number}#comparison_basic")
done

gcdrtlnumbers=(
#151 39 28 
126
#36 30 62 56 66 69 64 73 142 145 124 133 150 178 151 39 204 28 126 294 295 297 298 299 300 301 302 303 304 305 306 307 308 312 313 314 315 316 317 318 319 320 321 322 323 324 325 327 328 330
# alt unten
#36 30 62 56 66 69 64 73 142 145 124 133 150 178 175 163 204 185 189 294 295 297 298 299 300 301 302 303 304 305 306 307 308 312 313 314 315 316 317 318 319 320 321 322 323 324 325 32>
)
for number in "${gcdrtlnumbers[@]}"
do
        tests+=("gcd_mutate_rtl${number}#functional_rtl_basic")
        tests+=("gcd_mutate_rtl${number}#comparison_basic")
done


plicrtlnumbers=(
#30 110 95 116 117 118 119 120 121 784 863 890 875 893 894 896 897 899 900 902 903 905 906 909 910 1002 1041 1035 1308 1486 1493 1500 1502 1505 1506 1511 1514 1517 1598 1625 1689 1692 1697 1698 1699 1701 1849 1850 1851 1853 1857 1859 1861 1864 1865 1870 1871
)
for number in "${plicrtlnumbers[@]}"
do
        tests+=("sysc_plic_mutate_rtl${number}#functional_test_basic")
        tests+=("plic_mutate_rtl${number}#functional_test_threshold")
        tests+=("plic_mutate_rtl${number}#functional_test_priority")
        tests+=("comp${number}#comparison_threshold")
        tests+=("comp${number}#comparison_priority")
done

plictlmnumbers=(
#9 10 11 13 15 17 19 25 35 43 45 47 49 50 51 371 376 379 708 713 714 715 717 720 722 727 729 732 830 873 1009 1012 1014 1016 1246 1476 1477 1487 1488 1498 1499 1500 1501 41 943 1010 1008 1363 1402 1472
)
#plictlmnumbers=(41 943 1010 1008 1363 1402 1472) # vergessen, muss oben noch mit rein
for number in "${plictlmnumbers[@]}"
do
        tests+=("plic_mutate_tlm${number}#functional_test_basic")
        tests+=("plic_mutate_tlm${number}#functional_test_consider_threshold")
        tests+=("plic_mutate_tlm${number}#functional_test_priority_direct")
        tests+=("comp_tlm${number}#comparison_threshold")
        tests+=("comp_tlm${number}#comparison_priority")
done

today=$(date +"%Y-%m-%d-%H.%M")
testfolder_base=test/$today
klee_args=(
		"--libcxx"
		"--libc=uclibc"
		"-posix-runtime"
		"-only-output-states-covering-new"
		"-max-memory=40000"	#default: 2000 -> 2GB
		#"--emit-all-errors=1"
		#"--use-query-log=solver:kquery"
#    "--log-partial-queries-early=true"
		#"--optimize"
		#"--max-memory=1000"
		"--max-time=15min"
		#"--max-sym-array-size=4096"
		"--max-solver-time=120s"
		"--watchdog"
		"--search=bfs"
		"-exit-on-error"
		#"--const-array-threshold=4"
)

echo "Today is $today, writing to $testfolder_base"
#	rm -r "$testfolder/*" 2> /dev/null
mkdir -p $testfolder_base 2> /dev/null

make -j5 -s -C $buildfolder clean
i=0 #lol
j=0
for test in ${tests[@]}
do
  if [ $j -ge 9 ]
  then
    for((k=0;k<10;k++)); do
	echo "waiting for PID ${klee_pid[${k}]} (${tests[$((i-j))]})..."
      wait "${klee_pid[${k}]}"
      echo -e "${GRN}${tests[$((i-j))]} finished.$NORM"
      unset 'klee_pid[${k}]'
      j=$[j - 1]
    done
    j=0
  fi
	base_name=$(echo $test | cut -d "#" -f1)
	subtype=$(echo $test | cut -d "#" -s -f2)
	testfolder=$testfolder_base/$test
	mkdir $testfolder
	echo "Building testbench_$base_name"
	make -j5 -C $buildfolder testbench_$base_name --no-print-directory
	echo -e "${BLU}Running test $base_name ($subtype)$NORM"
	klee_target_folder[${i}]="$testfolder"
	#rm -rf klee_folder[${i}]
				args="${klee_args[*]} $buildfolder/testbench_${base_name}"
	echo "klee --output-dir=${klee_target_folder[${i}]}/klee-run ${args} $subtype > $testfolder/run.log"
	{ time klee --output-dir=${klee_target_folder[${i}]}/klee-run ${args} $subtype ; } > "$testfolder/run.log" 2>&1 &
	 klee_pid[${j}]=$!
	sleep 1
	 echo "$base_name ($subtype) running as ${klee_pid[${j}]} into ${klee_folder[${i}]}"
#	echo -e "${GRN}${tests[${i}]} finished.$NORM"
	i=$[i + 1]
	j=$[j + 1]
done

for ((i=0;i<${#klee_pid[@]};i++)); do
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
