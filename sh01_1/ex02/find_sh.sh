#!/bin/bash
#
# Script to find all file names ending with ".sh" in the current directory and 
# its sub-directories.
#
# Description:
# find .: starts the search in the current directory and its subdirectories.
# -type f: specifies that only files (not directories) should be considered.
# -name "*.sh": specifies that the file names should end with ".sh".
# -exec basename {} .sh \;: for each found file, the basename command is 
# executed to remove the path and the ".sh" extension. The {} is a placeholder 
# for the current file.
find . -type f -name "*.sh" -exec basename {} .sh \;
