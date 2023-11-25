#!/bin/bash

TIME=$(date "+%k")

if ((TIME < 12 )); then
    echo "Good morning"
elif ((TIME < 18 )); then
    echo "Good afternoon"
else
    echo "Good evening"
fi
