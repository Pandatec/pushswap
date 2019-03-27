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

void swap_list(list_t **l_a, list_t **l_b)
{
    list_t *tmp;
    int i = 1;

    while (i == 1) {
        i = 0;
        tmp = *l_a;
        while ((*l_a)->next != NULL) {
            if ((*l_a)->number > (*l_a)->next->number) {
                sa(l_a);
                i = 1;
            }
            pb(l_a, l_b);
            tmp = tmp->next;
        }
        while (*l_b != NULL)
            pa(l_a, l_b);
    }
}
