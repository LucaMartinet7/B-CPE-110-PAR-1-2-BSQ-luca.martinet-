/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-luca.martinet
** File description:
** array_num_char.c
*/

#include "../include/my.h"

void print_array_num_char(bsq_t *bsq, char **str)
{
    for (int i = 0; i < bsq->lines; i++) {
        for (int j = 0; j < bsq->columns; j++) {
            my_putchar(str[i][j]);
        }
    }
}

char **malloc_array_num_char(bsq_t *bsq)
{
    char **array = malloc(sizeof(char *) * (bsq->lines));
    if (array == NULL)
        return NULL;
    for (int i = 0; i < bsq->lines; i++) {
        array[i] = malloc(sizeof(char) * (bsq->columns));
        if (array[i] == NULL)
            return NULL;
    }
    return array;
}

void condition(char **str, int i, int j)
{
    if (str[i][j] == '.')
        str[i][j] = '1';
    else if (str[i][j] == 'o')
        str[i][j] = '0';
}

char **map_in_num_char(bsq_t *bsq, char **str)
{
    for (int i = 0; i < bsq->lines; i++) {
        for (int j = 0; j < bsq->columns; j++) {
            condition(str, i, j);
        }
    }
    return str;
}
