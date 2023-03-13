#!/bin/bash
gcc tester.c ./src/add_end_list.c ./src/free_list.c ./src/get_def.c ./bonus/get_node.c ./src/my_strcpy.c ./src/my_strlen.c ./src/my_strdup.c ./src/my_strcomp.c -Wall -Wextra -g3 -I./include
valgrind ./a.out
