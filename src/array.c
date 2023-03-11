/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-luca.martinet
** File description:
** array.c
*/

#include "../include/my.h"

void print_array(bsq_t *bsq, char **map)
{
    for (int i = 0; i < bsq->lines; i++) {
        for (int j = 0; j < bsq->columns; j++) {
            my_printf("%c", map[i][j]);
        }
        my_putchar('\n');
    }
}

void print_int_map(bsq_t *bsq, int** map)
{
    for (int i = 0; i < bsq->lines; i++) {
        for (int j = 0; j < bsq->columns; j++) {
            my_printf("%d", map[i][j]);
        }
        my_putchar('\n');
    }
}

char **malloc_array(bsq_t *bsq)
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

char **map_in_array(bsq_t *bsq, char **map)
{
    int x = 0;
    for (int i = 0; i < bsq->lines; i++) {
        for (int j = 0; j < bsq->columns; j++) {
            map[i][j] = bsq->buf[x];
            x++;
        }
        x++;
    }
    return map;
}
