/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** Task03 of Day04
*/

int my_strlen(char const *str)
{
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}
