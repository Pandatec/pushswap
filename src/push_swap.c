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

void usage(void)
{
    write(1, "USAGE\n", 6);
    write(1, "    .push_swap nb1 nb2 nb3 .... nbx\n", 36);
    write(1, "DESCRIPTION\n", 12);
    write(1, "    The program print the series of operations\n", 47);
    write(1, "    that enable this list to be sorted.\n", 40);
    write(1, "    sa : swap the first two lists of l_a\n", 41);
    write(1, "    sb : swap the first two lists of l_b\n", 41);
    write(1, "    pa take the first list from l_b and move it to l_a\n", 55);
    write(1, "    pa take the first list from l_a and move it to l_b\n", 55);
}

int main(int ac, char **av)
{
    list_t *l_a = NULL;
    list_t *l_b = NULL;
    int nb;

    if (l_a != NULL || l_b != NULL)
        return (84);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        usage();
        return (0);
    }
    if (ac < 3)
        return (0);
    for (int i = 0; av[i] != NULL; i += 1)
    {
        nb = my_getnbr(av[i]);
        l_a = my_put_in_list(l_a, nb);
    }
    check_list(&l_a, &l_b, ac);
    my_putstr("rb\n");
    return (0);
}
