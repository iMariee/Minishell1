/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** main.c
*/

#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include "root.h"
#include "struct.h"
#include <stdlib.h>

char *where_i_am(env_t *list)
{
    env_t *tmp = NULL;
    char *pwd = NULL;
    for (tmp = list; tmp != NULL; tmp = tmp->next) {
        if (my_strcomp(tmp->term, "PWD") == 0) {
            pwd = tmp->def;
            return pwd;
        }
    }
    return pwd;
}

int main(int argc, char **argv, char **env)
{
    int cont = 1;
    char *line = NULL;
    size_t size = 0;
    long l = 0;
    env_t *envdup = create_lenv(env);
    while (cont == 1) {
        my_putstr("[user@your_laptop] $> ");
        l = getline(&line, &size, stdin);
        if (verify_typed(line, l, envdup) == 84) {
            my_putstr(line_w_n(line));
            my_putstr(": Command not found.\n");
        }
    }
    free_list(envdup);
    return 0;
}
