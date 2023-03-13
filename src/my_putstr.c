/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** Task02 of Day04
*/

#include <unistd.h>
#include "root.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}
