/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** get_node.c
*/

#include "struct.h"
#include <stddef.h>

env_t *get_node(env_t *env, int index)
{
    env_t *tmp = env;
    for (; tmp->next != NULL; tmp = tmp->next, index++) {
        if (tmp->index == index) {
            return tmp;
        }
    }
    return NULL;
}
