#!/bin/bash
gcc -Wall -Werror -pedantic -Wextra -std=gnu89 -c *.c
ar -rcs liball.a *.o
