/*
** EPITECH PROJECT, 2022
** STEP01
** File description:
** EPITECH Rush2 projects
*/
#include <unistd.h>
#include "../../../../include/my.h"
int my_put_u(unsigned int nb)
{
    if (nb > 9)
        my_put_u(nb / 10);
    my_putchar(nb % 10 + '0');
    return 0;
}
