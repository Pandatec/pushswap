/*
** EPITECH PROJECT, 2018
** struct.h
** File description:
** structure for the pushswap
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct list_s
{
    int number;
    struct list_s *next;
} list_t;

void check_list(list_t **, list_t **, int);
int my_getnbr(char const *);
void my_putchar(char);
list_t *my_put_in_list(list_t *, int);
int my_put_nbr(int);
void  my_show_list(list_t **);
int my_strlen(char const *);
void swap_list(list_t **, list_t **);
int my_putstr(char const *);
void pa(list_t **, list_t **);
void pb(list_t **, list_t **);
void sa(list_t **);
list_t *my_add_in_list(list_t *, int);

#endif
