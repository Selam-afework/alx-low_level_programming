#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra main.h -c *.c
ar -rc liball.a *.o
ranlib liball.a
