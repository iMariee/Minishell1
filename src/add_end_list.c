/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** add_end_list.c
*/

#include <stdlib.h>
#include "struct.h"

env_t *add_end_list(env_t *list, char *part1, char *part2)
{
    env_t *new = malloc(sizeof(env_t));
    env_t *temp = NULL;
    new->term = part1;
    new->def = part2;
    new->index = 0;
    new->next = NULL;
    new->prev = NULL;

    if (list == NULL) {
        return new;
    } else {
        for (temp = list; temp->next != NULL; temp = temp->next);
        temp->next = new;
        new->index = temp->index + 1;
        new->prev = temp;
    }
    return list;
}
