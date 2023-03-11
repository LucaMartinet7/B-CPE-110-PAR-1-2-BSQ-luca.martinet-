/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** bsq.c
*/
#include "../include/my.h"

void freeall(bsq_t *bsq, char **str, int **temp1)
{
    free (bsq->buf);
    free (str);
    free (temp1);
}

int bsq_steps(char **av)
{
    bsq_t bsq = {0};
    bsq.buf = open_file(av[1]);
    error_handling(&(bsq));
    count_lines(&bsq);
    count_col(&bsq);
    skip_first_line(&bsq);
    error_handling2(&(bsq));
    remove_first_line(&bsq);
    char **str = map_in_array(&(bsq), malloc_array(&bsq));
    char **str2 = malloc_array_num_char(&bsq);
    str2 = map_in_num_char(&(bsq), str);
    int **map_int = malloc_array_int(&(bsq));
    map_int = map_in_int(&(bsq), map_int, str2);
    int **temp1 = algo_pt1(&(bsq), map_int);
    int **temp2 = print_square(&(bsq), temp1);
    my_printf("%s", bsq.buf);
    freeall(&bsq, str, temp1);
    return 0;
}

int bsq_gen_steps(char **av)
{
    bsq_t bsq = {0};
    bsq.size_gen = my_getnbr(av[1]);
    char *pattern = av[2];
    error_handling_gen(av, pattern);
    char **map = gen_map(&(bsq), pattern);
    char **map_for_print = gen_map(&(bsq), pattern);
    bsq.lines = bsq.size_gen;
    bsq.columns = bsq.size_gen;
    char **str2 = malloc_array_num_char(&bsq);
    str2 = map_in_num_char(&(bsq), map);
    int **map_int = malloc_array_int(&(bsq));
    map_int = map_in_int(&(bsq), map_int, str2);
    int **temp1 = algo_pt1(&(bsq), map_int);
    int **temp2 = print_gen_square(&(bsq), temp1, map_for_print);
    print_array22(&(bsq), map_for_print);
    return 0;
}

int main(int ac, char **av)
{
    if (ac == 2)
        bsq_steps(av);
    if (ac == 3)
        bsq_gen_steps(av);
    if (ac != 2 && ac != 3)
        return 84;
    return 0;
}
