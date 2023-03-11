/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-luca.martinet
** File description:
** error_handling.c
*/

#include "../include/my.h"

int error_handling(bsq_t *bsq)
{
    if (bsq->buf == NULL)
        exit (84);
    return 0;
}

int error_handling2(bsq_t *bsq)
{
    if (my_getnbr(bsq->buf) != bsq->lines)
        exit (84);
    return 0;
}

int correct_str(char *pattern)
{
    for (int i = 0; pattern[i] != '\0'; i++) {
        if (pattern[i] == 'o' || pattern[i] == '.') {
            continue;
        } else {
            return 2;
        }
    }
    return 0;
}

int error_handling_gen(char **av, char *pattern)
{
    if (correct_str(pattern) == 2)
        exit (84);
    if (av[1][0] == '-')
        exit (84);
    return 0;
}
