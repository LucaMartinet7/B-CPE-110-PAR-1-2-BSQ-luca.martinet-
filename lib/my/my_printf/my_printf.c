/*
** EPITECH PROJECT, 2022
** printf
** File description:
** printf
*/

#include <stdarg.h>
#include "../../../include/my.h"

void part2(const char *restrict format, int i, va_list list)
{
    switch (format[i]) {
    case 'o': int_to_oct(va_arg(list, int)); break;
    case 'u': my_put_u(va_arg(list, int)); break;
    case 'x': int_to_x_lower(va_arg(list, int)); break;
    case 'X': int_to_x_upper(va_arg(list, int)); break;
    case 'p':
        my_putstr("0x");
        my_put_nbr(int_to_x_lower(va_arg(list, int)));
    break;
    case 'b': int_to_bin(va_arg(list, int)); break;
    }
}

void outplayed(const char *restrict format, int i, va_list list)
{
    switch (format[i]) {
    case 'c': my_putchar(va_arg(list, int)); break;
    case 's': my_putstr(va_arg(list, char*)); break;
    case 'i':
    case 'd': my_put_nbr(va_arg(list, int)); break;
    case '%': my_putchar('%'); break;
    }
    part2(format, i ,list);
}

int my_printf(const char *restrict format, ...)
{
    va_list list;
    int i = 0;
    va_start(list, format);
    while (format[i] != '\0') {
        if (format[i] != '%')
            my_putchar(format[i]);
        else {
            i++;
            outplayed(format, i, list);
        }
        i++;
    }
    va_end(list);
    return 0;
}
