/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-luca.martinet
** File description:
** array_int.c
*/

#include "../include/my.h"

int **malloc_array_int(bsq_t *bsq)
{
    int **array = malloc(sizeof(int *) * (bsq->lines + 1));
    if (array == NULL)
        return NULL;
    for (int i = 0; i < bsq->lines; i++) {
        array[i] = malloc(sizeof(int) * (bsq->columns + 1));
        if (array[i] == NULL)
            return NULL;
    }
    return array;
}

int **map_in_int(bsq_t *bsq, int **str, char **str2)
{
    int temp = 0;
    for (int i = 0; i < bsq->lines; i++) {
        for (int j = 0; j < bsq->columns; j++) {
            temp = str2[i][j] - '0';
            str[i][j] = temp;
        }
    }
    return str;
}
