/*
** EPITECH PROJECT, 2022
** int to oct
** File description:
** int to oct
*/

#include "../../../../include/my.h"
int int_to_oct(int nb)
{
    int a = 0;
    if (nb > 7) {
        a = (nb % 8);
        nb = (nb - a) / 8;
        int_to_oct(nb);
        my_putchar(a + 48);
    } else
        my_putchar(nb % 8 + 48);
    return 0;
}
