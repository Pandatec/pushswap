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

void check_list(list_t **l_a, list_t **l_b, int ac)
{
    list_t *tmp;
    int cpt = ac - 2;
    int i = 0;

    tmp = *l_a;
    while (tmp->next != NULL && tmp->number < tmp->next->number) {
        i += 1;
        tmp = tmp->next;
    }
    if (i == cpt)
        my_putstr("La liste est déjà triée.\n");
    else
        swap_list(l_a, l_b);
}
