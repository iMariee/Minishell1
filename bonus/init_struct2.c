/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** init_struct.c
*/

#include <stdlib.h>
#include "struct.h"

env_t *init_struct(int size)
{
    env_t *struc = malloc(sizeof(env_t) * (size + 1));
    int i = 0;
    for (; i < size + 1; i++) {
        struc[i].term = NULL;
        struc[i].def = NULL;
        struc[i].max_size = (-1);
        struc[i].size = (-1);
    }
    struc[0].max_size = size + 1;
    struc[0].size = 0;
    return struc;
}
