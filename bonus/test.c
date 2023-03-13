/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** test.c
*/

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "include/root.h"

void cut_phrase(char *str)
{
    int len = strlen(str);
    char temp1[] = "azerty lol";
    char *temp = NULL;
    char *tok = strtok_r(temp1, " ", &temp);

    while (tok != NULL) {
        printf("%s\n", tok);
    }
    tok = strtok_r(NULL, " ", &temp);
}

int main(void)
{
    cut_phrase("");
}
