/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-luca.martinet
** File description:
** counters.c
*/

#include "../include/my.h"

void skip_first_line(bsq_t *bsq)
{
    int i = 0;
    while (bsq->buf[i] != '\n') {
        bsq->skip++;
        i++;
    }
    bsq->skip = i + 1;
}

void count_lines(bsq_t *bsq)
{
    int lines = 0;
    for (int i = 0; bsq->buf[i] != '\0'; i++) {
        if (bsq->buf[i] == '\n')
            lines++;
    }
    bsq->lines = lines - 1;
}

void count_col(bsq_t *bsq)
{
    int i = 0;
    while (bsq->buf[i] != '\n') {
        i++;
    }
    i++;
    int col = 0;
    while (bsq->buf[i] != '\n') {
        col++;
        i++;
    }
    bsq->columns = col;
}
