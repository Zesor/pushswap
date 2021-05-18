/*
** EPITECH PROJECT, 2020
** STRUCTURES_H
** File description:
** STRUCTUTRES_H
*/

#ifndef STRUCT_H
#define STRUCT_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

    /* Définition d'un noeud de la liste */

typedef enum {
    false,
    true
} Bool;

typedef struct DListNode {
    int value;
    struct DListNode *next;
    struct DListNode *prev;
}   DListNode;

typedef struct DList
{
    int length;
    struct DListNode *begin;
    struct DListNode *end;
} *DList;
    /* Prototypes */

void first_node(DList li, int x);
int put_in_end(DList li, int x);
void push_swap(DList l_a);
void free_my_list(DList li);
int sa(DList li);
void pa(DList l_a, DList l_b, DListNode *node_b);
int ra(DList li);
int sb(DList li);
int pb(DList l_a, DList l_b);
int rb(DList li);
int rr(DList li);
void swap_two_first(DList li);
void rotate_begin_to_end(DList li);
void sort_list(DList li);
int list_length(DList li);
Bool is_empty_list(DList li);
DList insert_for_rotate(DList li, int x);
DList *my_realloc(void);
void ra_controle(DList l_a);
void pa_controle(DList l_a, DList l_b, DListNode *node_b);
int sorted_already(DList li);
void print_list(DList li);
DList insert_begin(DList li, int x);
DList insert_end(DList li, int x);
/*
int sorted_already(DListNode *li)
{
    DListNode *new_node = li;

    if (list_length(li) <= 1)
        return 1;
    for (; new_node->next->next != li; new_node = new_node->next)
        if (new_node->value > new_node->next->value)
            return 0;
    if (new_node->value > new_node->next->value)
        return 0;
    return 1;
}
*/
#endif /* !STRUCT */
