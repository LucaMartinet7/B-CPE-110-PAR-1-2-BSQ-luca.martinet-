/*
** EPITECH PROJECT, 2022
** int to hexa lower
** File description:
** int to hexa lower
*/

#include "../../../../include/my.h"
int int_to_x_lower(int nb)
{
    if (nb <= 0) {
        return 0;
    } else {
        int_to_x_lower(nb / 16);
    }
    if (nb % 16 < 10) {
        my_put_nbr(nb % 16);
    } else {
        my_putchar(nb % 16 + 87);
    }
    return 0;
}
