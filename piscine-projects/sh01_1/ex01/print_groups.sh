#!/bin/bash

# Get the value of the FT_USER environment variable
USER=$FT_USER

# Use the `groups` command to display the list of groups for the specified user
# groups $USER | tr ' ' ',' | tr -d '\n'

# Print a new line  between the different apporaches
# echo 

# Use the `groups` command to display the list of groups for the specified user
id $USER -Gn | tr ' ' ',' | tr -d '\n'