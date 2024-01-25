#!/bin/bash
#
# Script that will display the list of groups for which the login,
# contained in the environment variable FT_USER , is a member. Separated by
# commas without spaces.
#
# Description:
# id $USER -Gn: Prints the group names of the user.
# tr ' ' ',': Translates (replaces) spaces with commas.
# tr -d '\n': Translates (deletes) newline characters.
#
# Get the value of the FT_USER environment variable
USER=$FT_USER
#
# Use the `id` command to display the list of groups for the specified user
id $FT_USER -Gn | tr ' ' ',' | tr -d '\n'