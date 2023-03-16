#!/bin/bash

directory_name="dummy"

cd ..
git add C/Makefile
cd C/leetcode
mkdir $directory_name
cd $directory_name
touch lab.c
nano lab.c
