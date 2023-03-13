/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** count_total.c
*/

#include <stdlib.h>

int count_total(char **tab)
{
    int i = 0;
    while (tab[i] != NULL) {
        i++;
    }
    return i;
}
