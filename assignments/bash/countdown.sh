#!/bin/bash

# Name: Jemaine Presbery
# File Name: countdown.sh

# This program below countdons down from the number n which equals 10

# Starting countdown number
n=10


# While loop that countdowns number until it equals 0
while (( $n != 0 ));      # If 10 does not equal zero the follow instructions below
do
  echo "$n"               # prints out number after 1 is subtracted by n
  n=$(( n - 1 ))
  sleep 0.5               # A half of second is taking up between each loop
 done

 echo "GO!"               # Prints out GO! after countdown is complete
