/*
** EPITECH PROJECT, 2018
** my_show_list.c
** File description:
** show list
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/struct.h"

void  my_show_list(list_t **list)
{
    list_t *tmp;

    tmp = *list;
    while (tmp != NULL) {
        my_put_nbr(tmp->number);
        my_putchar(' ');
        tmp = tmp->next;
    }
    my_putchar('\n');
}
