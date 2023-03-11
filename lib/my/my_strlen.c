/*
** EPITECH PROJECT, 2022
** str len
** File description:
** day 7
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}
