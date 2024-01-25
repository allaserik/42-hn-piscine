#!/bin/bash
#
# Script that displays one line out of two for the command ls -l,
# starting from the first line.
# 
# Description: 
# ls -l: Lists the files in long format.
# |: Pipes the output of ls -l to the next command.
# awk 'NR % 2 == 1': Uses awk to print only the lines where the record number 
# (NR) modulo 2 is equal to 1. This effectively prints every alternate line 
# starting from the first line.
ls -l | awk 'NR % 2 == 1'
