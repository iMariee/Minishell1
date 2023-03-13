/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** mi_str_to_word_array.c
*/

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "root.h"

static int count_col(char *str, char sep)
{
    int j = 0;
    int count = 0;

    while (str[j] != '\0') {
        if (str[j] == sep) {
            count++;
        }
        j++;
    }
    return count + 1;
}

static int itelli_len(int istart, char *string, char sep)
{
    int count = istart;

    while (string[count] != sep && string[count] != '\0') {
        count++;
    }
    return count;
}

char **str_to_word_array(char *str, char sep)
{
    int cols = 0;
    int rows = 0;
    int z = 0;
    int length = itelli_len(0, str, sep);
    char **tab = malloc(sizeof(char *) * (count_col(str, sep) + 1));
    tab[0] = malloc(sizeof(char) * (length + 1) + 1);

    for (; str[z] != '\0'; z++) {
        if (str[z] != sep) {
            tab[cols][rows++] = str[z];
        } else {
            tab[cols++][rows] = '\0';
            rows = 0;
            length = itelli_len((z + 1), str, sep);
            tab[cols] = malloc(sizeof(char) * (length + 1));
        }
    }
    tab[cols][z] = '\0';
    tab[cols + 1] = NULL;
    return tab;
}
