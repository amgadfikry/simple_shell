#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>

char **string_to_array(char *str, char dilm);
int string_search(char *str, char *word);
char *string_conc(char *str1, char *str2);
int string_len(char *str);
int string_cmp(char *s1, char *s2);
void free_array(char **arr);
void run(char **arr, char *command, char *env[], char *argv[]);
void shell_exit(char **arr);
void mode(char *text, int len);
void print_env(char *env[]);
char **get_path(char *env[]);
char *check_command(char *env[], char *arg, struct stat st);

#endif