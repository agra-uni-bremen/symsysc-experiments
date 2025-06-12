#!/usr/bin/env python3
import sys
import re
import os

# TODO concrete values
# TODO method for returning to original file status

arithmetic = ["+", "-", "/", "*", "%"]
logic = ["&&", "||"]
bitwise = ["&", "|", "^"]
shift = ["<<", ">>"]  #, "~"]
relation = ["<", ">", "==", "<=", ">="]

mutations = [arithmetic, logic, bitwise, shift, relation]


# mutate the given line
# known_positions are not changed anymore
# outfile for writing the result
# filename for correctly naming the macros
# counter: how many already inserted before start of the method?
# newtarget: should macro start with ifdef or elif (basically: am I just getting started on mutating this line
# returns: the amount of macros after this method => counter(input)+new. additionally: was the line changed at all?
def mutate_line(line: str, known_positions: list, outfile, filename: str, counter: int, newtarget: bool) -> (int,bool):
	for mutation in mutations:  # different mutation classes
		for j, m in enumerate(mutation):  # one mutation from current class
			for pos in [occurrence.start() + 1 for occurrence in  # all positions in the current line
						re.finditer(" " + re.escape(m) + " ", line) if occurrence.start()+1 not in known_positions]:
				for replacement in mutation[:j] + mutation[j + 1:]:  # all other mutations in the current class
					outfile.write(
						"#ifdef " + filename + str(counter) + "\n") if newtarget else outfile.write(
						"#elif defined(" + filename + str(counter) + ")\n")
					newtarget = False
					newline = line[:pos] + replacement + line[pos + len(m):]
					outfile.write(newline)
					counter,_ = mutate_line(newline, known_positions+[pos], outfile, filename, counter+1, False)
				known_positions+=[pos]
	return counter, newtarget


# switch around all above defined operators found in the given lines of the given file
# operators are switched only within their group (e.g. + would be replaced by -, /, *, % once each)
# operator has to be sourrounded by whitespace on both sides to avoid mixups (e.g. << vs. <)
# currently NOT considering all possible combinations of all operators in the line, but only replacing each operator seperately

# mutants can be switched on by setting the corresponding makros
# name scheme: filename + number, e.g. periph.c => periph0, periph1, periph2, ...

# original file content gets backed up into path.nomutations, the file saved under the original name contains the mutations
def mutate(path: str) -> int:
	# targets = [int(x) - 1 for x in targets]
	filename = re.split("[^a-zA-Z0-9_]", path)[-2]
	original_renamed = path + ".nomutations"
	os.rename(path, original_renamed)
	counter = 0
	with open(original_renamed, 'r') as infile, open(path, 'w') as outfile:
		for i, line in enumerate(infile):
			counter, unchanged = mutate_line(line, [], outfile, filename, counter, True)
			if not unchanged:
				outfile.write("#else\n")
			outfile.write(line)
			if not unchanged:
				outfile.write("#endif\n")
	return counter


if __name__ == "__main__":
	try:
		amount = mutate(sys.argv[1])
		print(f"inserted {amount} mutations. Macro name starts with the file name")
	except (IndexError, AttributeError, TypeError):
		print("first argument has to be file name, all following code line number")
