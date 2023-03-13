/*
** EPITECH PROJECT, 2022
** Antman
** File description:
** my_strcomp.c
*/

int my_strcomp(char const *s1, char const *s2)
{
    int i = 0;
    for (; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
    }
    return 0;
}
