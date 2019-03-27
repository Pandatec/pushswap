/*
** EPITECH PROJECT, 2018
** unknown files
** File description:
** don't do for the moment
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/struct.h"

int my_getnbr(char const *str)
{
    int var1 = 0;
    int var2 = 0;

    for (int i = 0; str[i] != '\0' && (str[i] < '0' || str[i] > '9'); i += 1) {
        if (str[i] != '+' && str[i] != '-')
            return (var1);
        else if (str[i] == '-' && var2 == 0)
            var2 = 1;
        else
            var2 = 0;
    }
    for (int i = 0; str[i] != '\0' && str[i] >= '0' && str[i] <= '9'; i += 1) {
        var1 = (var1 * 10) + (str[i] - 48);
    }
    if (var2 == 1)
        var1 = var1 * (-1);
    return (var1);
}
