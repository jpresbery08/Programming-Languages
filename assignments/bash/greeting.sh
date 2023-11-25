#!/bin/bash
now=$(date)
echo ""
# Below Greets the user
echo "Greeting $USER"

#Prints empty line
echo

#Below presents the users name and express the current date
echo "$USER the current day is: $now"
#Prints empty line
echo

#Prints out current users logged on to computer alongwith the current time and date
echo $(who)

# Prints empty line
echo

# -------------------------------- New Greeting.sh script-------------------------------------------------- #

# Declaration of hour variable on 24-hour format
hr=$(date +"%H")


# Prints out

if [ $hr -lt 12 ]; then
  echo "Good Morning $USER"
elif [ $hr -lt 18 ]; then
  echo "Good Afternoon $USER"
else
  echo "Time for you to go to bed sir"
fi

# Print empty line
echo
