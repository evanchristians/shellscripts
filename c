#!/bin/bash
# Compile and execute .cpp programs
# @Param: filepath: String!

suffix=".cpp"
out="${1%"$suffix"}.out"
g++ $1 -o $out
./$out