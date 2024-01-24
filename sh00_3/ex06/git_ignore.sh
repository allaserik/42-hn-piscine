#!/bin/bash

# List all ignored files
# Run in the directory where you want to check for files that are ignored
# Run with: bash git_ignore.sh | cat -e
git ls-files --ignored --exclude-standard --others
