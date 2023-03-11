/*
** EPITECH PROJECT, 2022
** rev str
** File description:
** day 7
*/

#include "../../include/my.h"

int my_changethename(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}

char *my_revsrt(char *str)
{
    int i = 0;
    int start = my_changethename(str);
    char temp;
    while (i < start / 2) {
        temp = str[i];
        str[i] = str[start - i - 1];
        str[start - i - 1] = temp;
        i += 1;
    }
    return (str);
}
