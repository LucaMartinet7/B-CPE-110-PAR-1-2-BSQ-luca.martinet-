/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-luca.martinet
** File description:
** remove_first_line.c
*/

#include "../include/my.h"

int remove_first_line(bsq_t *bsq)
{
    int i = bsq->skip;
    int j = 0;
    char *str = malloc(sizeof(char) * (my_strlen(bsq->buf) - i + 1));
    if (str == NULL)
        return NULL;
    while (bsq->buf[i] != '\0') {
        str[j] = bsq->buf[i];
        i++;
        j++;
    }
    str[j] = '\0';
    bsq->buf = str;
    return 0;
}
