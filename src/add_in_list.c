/*
** EPITECH PROJECT, 2018
** add_in_list.c
** File description:
** add in a list
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/struct.h"

list_t *my_add_in_list(list_t *list, int nb)
{
    list_t *tmp;

    tmp = malloc(sizeof(list_t));
    tmp->number = nb;
    tmp->next = list;
    list = tmp;
    return (list);
}
