#!/bin/sh -e
gcc  main.h -c *.c
ar -rc liball.a *.o
