/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** my_env.c
*/

#include <stddef.h>
#include "root.h"
#include "struct.h"

env_t *fill_env(char **env, env_t *struc)
{
    char **tab = NULL;
    for (int i = 0; env[i]; ++i) {
        tab = str_to_word_array(env[i], '=');
        struc[struc[0].size].term = tab[0];
        struc[struc[0].size].def = tab[1];
        struc[0].size += 1;
    }
    return struc;
}
