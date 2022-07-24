#!/bin/bash
gcc -Wall -Wextra -Werror -pedamtic -c *.c
ar rc liball.a *.o
