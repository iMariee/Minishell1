/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** my_realloc.c
*/

#include "struct.h"
#include <stdlib.h>

env_t *my_realloc(env_t *old, int size)
{
    if (old[0].size < old[0].max_size - 2) {
        return old;
    }
    if (size <= old[0].max_size) {
        size = old[0].max_size * 2;
    }
    int i = 0;
    env_t *new = malloc(sizeof(env_t) * (size + 1));
    for (; i <= old[0].size; i++) {
        new[i].term = old[i].term;
        new[i].def = old[i].def;
        new[i].max_size = old[i].max_size;
        new[i].size = old[i].size;
    }
    new[0].max_size = size;
    return new;
}
