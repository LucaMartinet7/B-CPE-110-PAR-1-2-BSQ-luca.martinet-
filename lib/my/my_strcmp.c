/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-2-myls-luca.martinet
** File description:
** my_strcmp.c
*/

#include "../../include/my.h"

int my_strcmp(char const s1, char consts2)
{
    for (int i = 0; s2[i] != '\0' ; i++) {
        if (s1[i] < s2[i])
            return -1;
        if (s1[i] > s2[i])
            return 1;
    }
    return 0;
}
