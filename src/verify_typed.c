/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** verify_typed.c
*/

#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include "root.h"
#include "struct.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

char *line_w_n(char *line)
{
    int i = 0;
    char *new = malloc(sizeof(char) * my_strlen(line));

    while (line[i] != '\n') {
        new[i] = line[i];
        i++;
    }
    if (line[i] == '\n') {
        new[i] = '\0';
    }
    return new;
}

static int verify_type_pt1(char *line, env_t *temp, char **term, int status)
{
    if (my_strcomp(line, "pwd\n") == 0) {
        my_pwd(temp);
        return status;
    }
    if (my_strcomp(term[0], "unsetenv") == 0) {
        delete_chain(temp, term[1]);
        return status;
    }
    if (my_strcomp(line, "env+\n") == 0) {
        disp_lenv(temp);
        return status;
    }
    if (my_strcomp(line, "cd\n") == 0) {
        my_cd(temp);
        return status;
    }
    status = 84;
    return status;
}

int verify_typed(char *line, long l, env_t *list)
{
    char **term = str_to_word_array(line, ' ');
    env_t *temp = list; int status = 0;
    if ((my_strcomp(line, "exit\n") == 0) || (l == (-1))) {
        my_putstr("exit\n"); exit(0);
    }
    if (verify_type_pt1(line, temp, term, status) == 0) {
        return status;
    }
    if ((my_strcomp(line, "env\n") == 0) || my_strcomp(line, "setenv\n") == 0) {
        disp_env(temp); return status;
    }
    if (my_strcomp(term[0], "setenv") == 0) {
        if (count_space(line) == 1) {
            temp = my_setenv(list, line_w_n(term[1]), " "); return status;
        }
        temp = the_setenv(temp, term[1], term[2], line_w_n(line));
        return status;
    }
    status = 84;
    return status;
}
