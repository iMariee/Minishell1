/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** disp_lenv.c
*/

#include <stddef.h>

#include "root.h"
#include "struct.h"

void disp_env(env_t *env)
{
    env_t *tmp = NULL;
    for (tmp = env; tmp != NULL; tmp = tmp->next) {
        if (tmp != NULL) {
            my_putstr(tmp->term);
            my_putchar('=');
            my_putstr(tmp->def);
        } else {
            my_putstr("Error: tmp = (null)");
        }
        my_putchar('\n');
    }
}

void disp_lenv(env_t *env)
{
    env_t *tmp = NULL;
    for (tmp = env; tmp != NULL; tmp = tmp->next) {
        if (tmp != NULL) {
            my_putstr("env[");
            my_put_nbr(tmp->index + 1);
            my_putstr("] = {\n"); my_putstr("\tindex = '");
            my_put_nbr(tmp->index);
            my_putstr("';\n\tterm = '");
            my_putstr(tmp->term);
            my_putstr("';\n\tdef = '");
            my_putstr(tmp->def);
            my_putstr("';\n\tnext = '");
            my_put_lnbr((long int)tmp->next);
            my_putstr("';\n\tprev = '");
            my_put_lnbr((long int)tmp->prev);
            my_putstr("';\n}\n");
        } else {
            my_putstr("Error: tmp = (NULL)\n");
        }
    }
}
