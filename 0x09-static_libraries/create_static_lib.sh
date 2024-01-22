#!/bin/bash
# compile all the C files
gcc -c *.c
# create the library from the object files
ar rcs liball.a *.o
# remove the temporary object files
rm -f *.o
# print out message when successful
echo "Static Library Created Successfully"
