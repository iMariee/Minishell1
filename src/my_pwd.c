/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** my_pwd.c
*/

#include "root.h"
#include "struct.h"
#include <stddef.h>

void my_pwd(env_t *list)
{
    env_t *temp = NULL;
    for (temp = list; temp != NULL; temp = temp->next) {
            if (my_strcomp(temp->term, "PWD") == 0) {
                my_putstr(temp->def);
            }
        }
        my_putchar('\n');
}
