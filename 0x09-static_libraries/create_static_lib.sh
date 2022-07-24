#!/bin/bash
gcc -wall -wextra -werror -pedamtic -m *.c
ar rc liball.a *.o
