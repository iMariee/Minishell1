/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** my_cd.c
*/

#include "root.h"
#include "struct.h"
#include <stddef.h>

void my_cd(env_t *list)
{
    env_t *tmp = NULL;
    char *home = NULL;
    for (tmp = list; tmp != NULL; tmp = tmp->next) {
        if (my_strcomp(tmp->term, "HOME") == 0) {
            home = tmp->def;
        }
    }
    tmp = NULL;
    for (tmp = list; tmp != NULL; tmp = tmp->next) {
        if (my_strcomp(tmp->term, "PWD") == 0) {
            tmp->def = home;
        }
    }
}
