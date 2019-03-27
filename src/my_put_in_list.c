/*
** EPITECH PROJECT, 2018
** push_swap
** File description:
** push_swap
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/struct.h"

list_t *my_put_in_list(list_t *list, int nb)
{
    list_t *elem = malloc(sizeof(list_t));
    list_t *tmp;

    if (elem == NULL)
        exit (84);
    elem->number = nb;
    elem->next = NULL;
    if (list == NULL)
        return (elem);
    tmp = list;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = elem;
    return (list);
}
