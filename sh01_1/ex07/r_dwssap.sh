#bash
#
# Script that displays the output of a cat /etc/passwd command,
# removing comments, every other line starting from the second line, 
# reversing each login, sorted in reverse alphabetical order, and keeping 
# only logins between FT_LINE1
# and FT_LINE2 included, and they must separated by ", " (without quotation
# marks), and the output must end with a ".".
#
# Description:
#cat /etc/passwd: Displays the content of the /etc/passwd file.
# grep -v '^#': Excludes lines starting with # (comments).
# awk 'NR % 2 == 0': Prints every other line starting from the second line.
# cut -d: -f1: Extracts the login (first field) using : as the delimiter.
# rev: Reverses each login.
# sort -r: Sorts logins in reverse alphabetical order.
# sed -n "${FT_LINE1},${FT_LINE2}p": Prints only the lines between FT_LINE1 
#and FT_LINE2 (lines 7 to 15 in this case).
# tr '\n' ', ': Replaces newline characters with , .
#sed 's/,$/./': Removes the trailing comma and adds a period at the end.
FT_LINE1=7;
FT_LINE2=15;
cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | cut -d: -f1 | rev | 
sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ', ' | sed 's/,$/./';
