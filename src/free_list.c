/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** free_list.c
*/

#include <stdlib.h>
#include "struct.h"

void free_list(env_t *list)
{
    int cont = 0;
    if (list == NULL) {
        cont = 1;
    }
    for (; cont == 0 && list != NULL; list = list->next) {
        if (list->prev != NULL) {
            free(list->prev->term);
            free(list->prev->def);
            free(list->prev);
        }
    }
    if (list != NULL) {
        free(list);
    }
}
