/*
** EPITECH PROJECT, 2023
** header
** File description:
** root
*/

#ifndef ROOT_H_
    #define ROOT_H_

void my_putchar(char c);
void my_putstr(char *str);
void call_ls(char **argv, char **env);
int my_strcomp(char const *s1, char const *s2);
int count_total(char **tab);
char **str_to_word_array(char *str, char sep);
int my_strlen(char const *str);
char *my_strdup(char const* src);
char *my_strcpy(char *dest, char const *src);
char **dup_tab(char **tab);
void my_put_nbr(int nb);
void my_put_lnbr(long int lnb);
int count_space(char *str);
char *line_w_n(char *line);

#endif
