#!/bin/bash
#
# Script that displays your machine’s MAC addresses. Each address must be 
# followed by a line break.
# Description:
# ifconfig: Displays network interface configuration.
# grep: The command for searching text using patterns.
# -E: Enables extended regular expressions, allowing the use of + for 
# "one or more" repetition.
# 'ether [0-9a-fA-F:]+': The pattern to match in each line.
#
# Explanation of the pattern:
# ether: Matches the literal string "ether".
# [0-9a-fA-F:]: Square brackets define a character class. This part matches any 
# digit (0-9), lowercase letter (a-f), uppercase letter (A-F), or colon (:).
# +: Indicates "one or more" of the preceding character class.
# So, the pattern looks for lines containing "ether" followed by one or more 
# characters that can be digits, lowercase or uppercase letters, or colons. 
# This helps filter out lines that don't match the typical format of MAC 
# addresses.
ifconfig | grep -E 'ether [0-9a-fA-F:]+' | awk '{print $2}' 
