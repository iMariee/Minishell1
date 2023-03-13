/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** delete_chain.c
*/

#include "root.h"
#include "struct.h"
#include <stdlib.h>

env_t *delete_chain(env_t *list, char *val)
{
    env_t *tmp = NULL;

    if (list == NULL) {
        return NULL;
    }
    if (my_strcomp(list->term, val) == 0) {
        tmp = list->next;
        free(list);
        tmp = delete_chain(tmp, val);
        return tmp;
    } else {
        list->next = delete_chain(list->next, val);
        return list;
    }
}
