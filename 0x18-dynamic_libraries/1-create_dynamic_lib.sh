#!/bin/bash
gcc -wall -wextra -werror -pendantic -c -fPIC *.c
gcc -shared -o liball.so *.o
