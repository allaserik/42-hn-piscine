#!/bin/bash

# Display the ids of the last 5 commits
# Run in git repository folder
git log -n 5 --format="%H"
