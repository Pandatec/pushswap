/*
** EPITECH PROJECT, 2018
** action.c
** File description:
** anction.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/struct.h"

void pa(list_t **l_a, list_t **l_b)
{
    int nb;

    if (*l_b == NULL)
        return;
    nb = (*l_b)->number;
    *l_a = my_add_in_list(*l_a, nb);
    *l_b = (*l_b)->next;
    my_putstr("pa ");
}

void pb(list_t **l_a, list_t **l_b)
{
    int nb;

    if (*l_a == NULL)
        return;
    nb = (*l_a)->number;
    *l_b = my_add_in_list(*l_b, nb);
    *l_a = (*l_a)->next;
    my_putstr("pb ");
}

void sa(list_t **l_a)
{
    list_t *tmp;

    tmp = *l_a;
    tmp = tmp->next;
    (*l_a)->next = tmp->next;
    tmp->next = *l_a;
    *l_a = tmp;
    my_putstr("sa ");
}
