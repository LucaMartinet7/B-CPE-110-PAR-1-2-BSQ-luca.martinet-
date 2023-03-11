/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-luca.martinet
** File description:
** open_file.c
*/

#include "../include/my.h"

char *open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        my_printf("%s\n", "FAILURE");
        return NULL;
    }
    struct stat ap;
    if (stat(filepath, &ap) == -1) {
        return NULL;
    }
    char *buffer = malloc(sizeof(char) * (ap.st_size + 1));
    if (buffer == NULL)
        return NULL;
    if (read(fd, buffer, ap.st_size) < 1)
        return NULL;
    buffer[ap.st_size] = '\0';
    close(fd);
    return buffer;
}
