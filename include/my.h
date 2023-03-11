/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-luca.martinet
** File description:
** my.h
*/

#pragma once

#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct bsq{
    int lines;
    int columns;
    int skip;
    char *buf;
    int y;
    int x;
    int size;
    int size_gen;
} bsq_t;
//lib/my
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_getnbr(char *str);
void my_putchar(char c);
int int_to_bin(int nb);
int int_to_oct(int nb);
int my_put_u(unsigned int nb);
int int_to_hex(int nb);
int my_put_e(int number, int maj);
int int_to_x_lower(int nb);
int int_to_x_upper(int nb);
int my_printf(const char *restrict format, ...);
char *my_strdup(const char *str);
int my_strcmp(char const *s1, char const *s2);
int my_putstr(char const *str);

//array
char **malloc_array(bsq_t *bsq);
char **map_in_array(bsq_t *bsq, char **map);
void print_map(bsq_t *bsq, char **map);
int **malloc_array_int(bsq_t *bsq);
int **map_in_int(bsq_t *bsq, int **str, char **str2);
char **malloc_array_num_char(bsq_t *bsq);
char **map_in_num_char(bsq_t *bsq, char **str);
void print_int_map(bsq_t *bsq, int** map);
void print_array(bsq_t *bsq, char **map);
//open_file
char *open_file(char const *filepath);
//counters
void skip_first_line(bsq_t *bsq);
void count_lines(bsq_t *bsq);
void count_col(bsq_t *bsq);
int remove_first_line(bsq_t *bsq);
//algo
int algo_min(int **array, int i, int j);
int algo_pt1(bsq_t *bsq, int **array);
int algo_pt2(bsq_t *bsq, int **array, int i, int j);
int find_max_pt1(bsq_t *bsq, int **array);
int find_max_pt2(bsq_t *bsq, int **array, int i, int j);
int print_square(bsq_t *bsq, int **array);
//gen map
int gen_map(bsq_t *bsq, char *pattern);
void print_array22(bsq_t *bsq, char **map);
void print_int_map22(bsq_t *bsq, int** map);
int print_gen_square(bsq_t *bsq, int **array, char **map);
//error_handling
int error_handling(bsq_t *bsq);
int error_handling_gen(char **av, char *pattern);
int check_characters(bsq_t *bsq);
int error_handling2(bsq_t *bsq);
