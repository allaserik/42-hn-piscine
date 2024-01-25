#!/bin/bash
#
# Script that displays the output of a cat /etc/passwd command,
# removing comments, every other line starting from the second line, 
# reversing each login, sorted in reverse alphabetical order, and keeping 
# only logins between FT_LINE1
# and FT_LINE2 included, and they must separated by ", " (without quotation
# marks), and the output must end with a ".".
#
# Description:
# 
#   cat /etc/passwd: Displays the content of the /etc/passwd file.
#   grep -v '^#': Excludes lines starting with # (comments).
#
#   awk 'NR % 2 == 0': Prints every other line starting from the second line.
#
#   cut -d: -f1: Extracts the login (first field) using : as the delimiter.
#
#   rev: Reverses each login.
#
#   sort -r: Sorts logins in reverse alphabetical order.
#
#   sed -n "${FT_LINE1},${FT_LINE2}p": Prints only the lines between FT_LINE1 
#      and FT_LINE2 (lines 7 to 15 in this case).
#
#   tr '\n' ', ': Replaces newline characters with , . Unfortunately only , 
#      and not , and space.
#
#   sed 's/,$/./': Removes the trailing comma and adds a period at the end.
#
#   awk "NR >= $FT_LINE1 && NR <= $FT_LINE2 { printf \"%s, \", \$0 } END \
#       { printf \".\" }" | \
#    NR is the variable in awk that represents the record (line) number.
#    $FT_LINE1 and $FT_LINE2 are shell variables that are passed to awk using 
#    the -v option. These represent the starting and ending lines.
#    NR >= $FT_LINE1 && NR <= $FT_LINE2 { printf "%s, ", $0 } is a condition 
#    that checks if the current line number is between FT_LINE1 and FT_LINE2 (inclusive). If it is, it prints the entire line ($0) followed by a comma and a space.
#    END { printf "." } is executed after processing all lines. It prints a dot.
#
#   sed 's/, \.$/./' is a sed command that removes the trailing comma and space 
#   before the dot. It looks for the pattern ", .$" (comma, space, dot at the 
#   end) and replaces it with just a dot.
#
# Ver 1:
#FT_LINE1=7;
#FT_LINE2=15;
#cat /etc/passwd | \
#    grep -v '^#' | \
#    awk 'NR % 2 == 1' | \
#    cut -d: -f1 | \
#    rev | \
#    sort -r | \
#    sed -n "${FT_LINE1},${FT_LINE2}p" | \
#    paste -s -d ', ' | \
#    sed 's/,$/./'
#
#    sed -n "${FT_LINE1},${FT_LINE2}p" | \
#    tr '\n' ', ' | \
#    sed 's/,$/./'
#
# Ver 2
# FT_LINE1=7;
# FT_LINE2=15;
#cat /etc/passwd | \
#    grep -v '^#' | \
#    awk 'NR % 2 == 1' | \
#    cut -d: -f1 | \
#    rev | \
#    sort -r | \
#    awk "NR >= $FT_LINE1 && NR <= $FT_LINE2 { printf \"%s, \", \$0 } END { printf \".\" }" | \
#    sed 's/, \.$/./'
#
# Ver 3
#FT_LINE1=7;
#FT_LINE2=15;
#cat /etc/passwd | grep -v '^#' | awk 'NR > 1' | awk 'NR%2' | egrep -o '([_a-z])+:\*'| sed 's/\:\*//g' | rev | sort -r | awk 'NR >= '$FT_LINE1' && 'NR' <= '$FT_LINE2'' | tr '\n' ',' | sed 's/,$/./' | tr -d '\n' | sed 's/,/, /g'

cat /etc/passwd | \
    grep -v '^#' | \
    awk 'NR % 2 == 1' | \
    cut -d: -f1 | \
    rev | \
    sort -r | \
    awk "NR >= $FT_LINE1 && NR <= $FT_LINE2 { printf \"%s, \", \$0 } END { printf \".\" }" | \
    sed 's/, \.$/./'
