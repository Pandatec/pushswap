/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** can write a caracters
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/struct.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
