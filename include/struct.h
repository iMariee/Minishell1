/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** struct.h
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct env_s {
    int index;
    char *term;
    char *def;
    struct env_s *next;
    struct env_s *prev;
} env_t;

void my_pwd(env_t *list);
int verify_typed(char *line, long l, env_t *list);
env_t *add_end_list(env_t *list, char *part1, char *part2);
void free_list(env_t *list);
void disp_lenv(env_t *env);
env_t *create_lenv(char **env);
void disp_env(env_t *env);
env_t *my_setenv(env_t *list, char *term, char *def);
env_t *the_setenv(env_t *list, char *term1, char *term2, char *line);
env_t *delete_chain(env_t *list, char *val);
void my_cd(env_t *list);

#endif
