#!/bin/bash
# Name: Jemaine Presbery
# File Name: countdown3.sh


# Description: This program below countdowns the number inputed by user
# Ex. Enter in a number: 10
# Ex. 10, 9, 8,.....0


# Variable that allows user to enter a number that they would want to start from when counting down
# within the command prompt line
n=$1

#creates an Empty line
echo

# While loop that countdowns number until it equals 0
while (( $n != 0 ));      # If 10 does not equal zero the follow instructions below
do
  echo "$n"               # prints out number after 1 is subtracted by n
  n=$(( n - 1 ))
  sleep 0.5               # A half of second is taking up between each loop
 done

 echo "GO!"               # Prints out GO! after countdown is complete
