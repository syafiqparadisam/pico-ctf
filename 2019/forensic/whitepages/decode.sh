#!/bin/bash

tr -cd ' \t' < whitepages.txt | \
sed 's/ /0/g; s/\t/1/g' | \
fold -w8 | \
while read byte; do
  printf "\\x%02x" "$((2#$byte))"
done | xargs -0 printf "%s\n"

