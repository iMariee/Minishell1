/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** crete_lenv.c
*/

#include "root.h"
#include "struct.h"
#include <string.h>
#include <stdlib.h>

static char *get_term(char **env, int i)
{
    char *tok = malloc(sizeof(char) * my_strlen(env[i]));
    int j = 0;
    while (env[i][j] != '=') {
        tok[j] = env[i][j];
        j++;
    }
    return tok;
}

static char *get_def(char **env, int i)
{
    char *str = malloc(sizeof(char) * my_strlen(env[i]));
    int j = 0;
    int z = 0;
    for (; env[i][j] != '\0'; j++) {
        str[z] = env[i][j];
        z++;
    }
    return str;
}

env_t *create_lenv(char **env)
{
    env_t *list = NULL;
    char **data = NULL;
    char *pt2 = NULL;
    for (int i = 0; env[i] != NULL; i++) {
        data = str_to_word_array(env[i], '=');
        list = add_end_list(list, data[0], data[1]);
    }
    return list;
}
