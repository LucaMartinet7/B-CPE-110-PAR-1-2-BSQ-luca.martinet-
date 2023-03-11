/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-luca.martinet
** File description:
** algo.c
*/

#include"../include/my.h"

int algo_min(int **array, int i, int j)
{
    int left = array[i][j - 1];
    int top = array[i - 1][j];
    int top_left = array[i - 1][j - 1];
    int next[3] = {left, top_left, top};
    int min_val = next[0];
    for (int k = 0; k < 2; k++){
        if (next[k + 1] < next[k]){
            min_val = next[k + 1];
        }
    }
    return min_val;
}

int algo_pt2(bsq_t *bsq, int **array, int i, int j)
{
    if (array[i][j] == 0) {
        array[i][j] = 0;
    } else if (i == 0 || j == 0) {
        array[i][j] = array[i][j];
    } else {
        array[i][j] = algo_min(array, i, j) + 1;
    }
}

int algo_pt1(bsq_t *bsq, int **array)
{
    for (int i = 0; i < bsq->lines; i++) {
        for (int j = 0; j < bsq->columns; j++) {
            algo_pt2(bsq, array, i, j);
        }
    }
    return array;
}

int find_max_pt2(bsq_t *bsq, int **array, int i, int j)
{
    if (array[i][j] > bsq->size) {
        bsq->size = array[i][j];
        bsq->x = i;
        bsq->y = j;
    }
}

int find_max_pt1(bsq_t *bsq, int **array)
{
    for (int i = 0; i < bsq->lines; i++) {
        for (int j = 0; j < bsq->columns; j++) {
            find_max_pt2(bsq, array, i, j);
        }
    }
    return bsq->size;
}
