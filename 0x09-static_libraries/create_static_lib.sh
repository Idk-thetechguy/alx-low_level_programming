#!/bin/bash
# Compile all .c files with strict warnings
gcc -Wall -Wextra -Werror -pedantic -c *.c
# Create a static library with all object files
ar rcs liball.a *.o
# Index the static library
ranlib liball.a
