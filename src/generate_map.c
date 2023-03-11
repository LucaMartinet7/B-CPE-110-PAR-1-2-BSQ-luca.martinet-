/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-luca.martinet
** File description:
** generate_map.c
*/

#include "../include/my.h"

char **malloc_array22(bsq_t *bsq, char *pattern)
{
    char **array = malloc(sizeof(char *) * (bsq->size_gen));
    if (array == NULL)
        return NULL;
    for (int i = 0; i < bsq->size_gen; i++) {
        array[i] = malloc(sizeof(char) * (bsq->size_gen));
        if (array[i] == NULL)
            return NULL;
    }
    return array;
}

int counter_for_pattern(int len_pat, int counter)
{
    if (counter == len_pat)
        return 0;
    return counter;
}

char **map_in_array22(bsq_t *bsq, char **map, char *pattern)
{
    int len_pat = my_strlen(pattern);
    int counter = 0;
    for (int i = 0; i < bsq->size_gen; i++) {
        for (int j = 0; j < bsq->size_gen; j++) {
            counter = counter_for_pattern(len_pat, counter);
            map[i][j] = pattern[counter];
            counter++;
        }
    }
    return map;
}

void print_array22(bsq_t *bsq, char **map)
{
    for (int i = 0; i < bsq->size_gen; i++) {
        for (int j = 0; j < bsq->size_gen; j++) {
            my_printf("%c", map[i][j]);
        }
        my_putchar('\n');
    }
}

int gen_map(bsq_t *bsq, char *pattern)
{
    char **map = malloc_array22(bsq, pattern);
    map = map_in_array22(bsq, map, pattern);
    return map;
}
