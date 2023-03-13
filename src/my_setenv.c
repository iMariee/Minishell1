/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** my_setenv.c
*/

#include <string.h>
#include <stdio.h>
#include "root.h"
#include "struct.h"

int count_space(char *str)
{
    int space = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            space++;
        }
    }
    return space;
}

env_t *my_setenv(env_t *list, char *term, char *def)
{
    env_t *temp = list;
    while (temp != NULL) {
        temp = temp->next;
        if (temp->next == NULL) {
            temp = add_end_list(temp, term, def);
            break;
        }
    }
    return temp;
}

env_t *the_setenv(env_t *list, char *term1, char *term2, char *line)
{
    env_t *temp = list;
    char *new = line_w_n(term2);
    if (count_space(line) > 2) {
        my_putstr("setenv: Too many arguments.\n");
    }
    if (count_space(line) == 2) {
        temp = my_setenv(list, term1, new);
    }
    return temp;
}
