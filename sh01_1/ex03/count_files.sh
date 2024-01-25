#!/bin/bash
#
# Script to count and display the number of regular files and directories in 
# the current directory and its sub-directories.
#
# Description:
# find . -type f -o -type d: finds all regular files (-type f) or directories 
# (-type d) in the current directory and its subdirectories.
# grep -c '^': counts the number of lines matched. The ^ matches the beginning 
# of each line.
find . -type f -o -type d | grep -c '^';
