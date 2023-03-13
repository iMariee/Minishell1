/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** tester.c
*/

#include <stdio.h>
#include <stddef.h>
#include "root.h"
#include "struct.h"

env_t *get_node(env_t *env, int index);
char *my_strcpy(char *dest, char const *src);

int main(void)
{
    env_t *tmp = NULL;
    int status = 0;
    env_t *my_env = add_end_list(NULL, my_strdup("a"),my_strdup("b"));
    printf("a = '%s'\n", get_def(my_env, "a", &status));
    my_env = add_end_list(my_env, my_strdup("b"), my_strdup("c"));
    my_env = add_end_list(my_env, my_strdup("d"), my_strdup("jqdsiçhdoqdzhe"));
    my_env = add_end_list(my_env, my_strdup("E"), my_strdup("qisjdàqdshàqsdqzjeàajaze"));
    my_env = add_end_list(my_env, my_strdup("f"), my_strdup("qsijdiqsdjàqsdjqsàdi"));
    my_env = add_end_list(my_env, my_strdup("g"), my_strdup("azeiuqhsçhdqsd"));
    my_env = add_end_list(my_env, my_strdup("h"), my_strdup("qsdqeeaze"));
    my_env = add_end_list(my_env, my_strdup("io"), my_strdup("dqsdf"));
    int ons = 0;
    for (tmp = my_env; tmp != NULL; tmp = tmp->next, ons++) {
        if (tmp != NULL) {
            printf("(a) data[%d] = {\n",ons);
            printf("\tindex = '%d'\n", tmp->index);
            printf("\tterm = '%s'\n", tmp->term);
            printf("\tdef = '%s'\n", tmp->def);
            printf("\tnext = '%p'\n", tmp->next);
            printf("}\n");
        } else {
            printf("i = '%d'\n", ons);
        }
    }
    tmp = get_node(my_env, 0);
    printf("'%s' = '%s'\n", tmp->term, tmp->def);
    free_list(my_env);
    return 0;
}
