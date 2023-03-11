/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-luca.martinet
** File description:
** my_str_to_array.c
*/

#include "../../include/my.h"

int my_putstr_bsq(char const *str, int len)
{
    int i = 0;
    while (str[i] != len) {
        my_putchar(str[i]);
        i += 1;
    }
}

int my_str_to_array(char * const *str)
{
    int i;
    int len = my_strlen(str[0]);
    for (i = 0; str[i]; i++) {
        my_putstr_bsq(str[i], len);
        my_putchar('\n');
    }
    return 0;
}
