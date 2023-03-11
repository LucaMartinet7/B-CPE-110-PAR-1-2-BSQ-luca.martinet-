/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-luca.martinet
** File description:
** print_square.c
*/

#include "../include/my.h"

int print_square(bsq_t *bsq, int **array)
{
    int size = find_max_pt1(bsq, array);
    int x = bsq->x;
    int y = bsq->y;
    for (int i = x; i > x - size; i--) {
        for (int j = y; j > y - size; j--) {
            bsq->buf[(i * (bsq->columns + 1)) + j] = 'x';
        }
    }
}

int print_gen_square(bsq_t *bsq, int **array, char **map)
{
    find_max_pt1(bsq, array);
    for (int i = bsq->x; i > bsq->x - bsq->size; i--) {
        for (int j = bsq->y; j > bsq->y - bsq->size; j--) {
            map[i][j] = 'x';
        }
    }
    return map;
}
