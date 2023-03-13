/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** dup_tab.c
*/

#include "root.h"
#include <stdlib.h>

static int count_col_tab(char **tab)
{
    int j = 0;

    while (tab[j] != NULL) {
        j++;
    }
    return j;
}

char **dup_tab(char **tab)
{
    char **final_tab = malloc(sizeof(char *) * (count_col_tab(tab) + 1));
    for (int i = 0; tab[i] != NULL; i++) {
        final_tab[i] = my_strdup(tab[i]);
    }
    return final_tab;
}
