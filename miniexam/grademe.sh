#!/bin/bash

# ANSI color codes
GREEN='\033[0;32m'
BLUE='\033[0;34m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# Directory where test scripts are located
TEST_SCRIPT_DIR=".tests"

# Fixed directory for exercises
EXERCISE_DIR="./exercises"

# Function to find and rename the first hidden file in the exercises directory
find_and_rename_first_hidden() {
    local skip=0 # Assuming 'skip' is a trigger rather than a variable to adjust functionality
    local i=$skip
    local found=0

    while [ $i -lt 100 ] && [ $found -eq 0 ]; do
        printf -v file "ex%02d.txt" $i # Generate file name with leading zero
        hidden_file=".$file"

        if [ -e "$EXERCISE_DIR/$hidden_file" ]; then # Check if the hidden file exists
            mv "$EXERCISE_DIR/$hidden_file" "$EXERCISE_DIR/$file" # Rename the hidden file by removing the leading dot
            echo "${GREEN}Showed $file${NC}"
            found=1
        fi

        ((i++))
    done

    if [ $found -eq 0 ]; then
        echo "${RED}It seems like you finished all the exersises.${NC}"
    fi
}

# Function to run a single test script
run_test_script() {
    script=$1
    chmod +x "$script" # Add executable permissions to the script
    if [ -x "$script" ]; then
        echo "${BLUE}Running test: $(basename "$script")${NC}"
        . "$script"
        echo "----------------------------------"
    else
        echo "${RED}Test script $script not executable or found.${NC}"
    fi
}

# Main script execution
if [ "$#" -eq 1 ]; then
    clear
    if [ "$1" = "skip" ]; then
        find_and_rename_first_hidden
    else
        TEST_SCRIPT="${TEST_SCRIPT_DIR}/ex$1/test$1.sh"
        run_test_script "$TEST_SCRIPT"
    fi
else
    clear
    echo "Running all tests..."
    for script in ${TEST_SCRIPT_DIR}/*/test*.sh; do
        run_test_script "$script"
    done
fi
