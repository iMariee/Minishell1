/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** call_ls.c
*/

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

void call_ls(char **argv, char **env)
{
    execve("/bin/ls", argv, env);
}
