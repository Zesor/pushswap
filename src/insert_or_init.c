/*
** EPITECH PROJECT, 2020
** double
** File description:
** double
*/

#include "structures.h"
#include "my.h"

void first_node(DList li, int x)
{
    DListNode *new_node = malloc(sizeof(DListNode));
    if (new_node == NULL)
        return;
    new_node->value = x;
    new_node->next = li->end;
    new_node->prev = li->begin;
    li->begin = new_node;
    li->end = new_node;
    li->length++;
}

int put_in_end(DList li, int x)
{
    DListNode *new_node = malloc(sizeof(DListNode));
    if (new_node == NULL)
        return 84;
    new_node->value = x;
    new_node->next = NULL;
    new_node->prev = NULL;
    li->end->next = new_node;
    li->end = new_node;
    li->length++;
    return 0;
}

DList insert_for_rotate(DList li, int x)
{
    DListNode *new_node = malloc(sizeof(DListNode));
    if (new_node == NULL)
        return NULL;
    new_node->value = x;
    new_node->next = NULL;
    new_node->prev = li->end;
    li->end->next = new_node;
    li->end = new_node;
    li->length++;
}

DList insert_begin(DList li, int x)
{
    DListNode *new_node = malloc(sizeof(DListNode));
    if (new_node == NULL)
        return NULL;
    new_node->value = x;
    new_node->next = NULL;
    new_node->prev = NULL;
    if (is_empty_list(li)) {
        li = malloc(sizeof(*li));
        if (li == NULL)
            return NULL;
        li->length = 0;
        li->begin = new_node;
        li->end = new_node;
    } else {
        li->begin->prev = new_node;
        new_node->next = li->begin;
        li->begin = new_node;
    }
    li->length++;
    return li;
}

DList insert_end(DList li, int x)
{
    DListNode *new_node = malloc(sizeof(DListNode));
    if (new_node == NULL)
        return NULL;
    new_node->value = x;
    new_node->next = NULL;
    new_node->prev = NULL;
    if (is_empty_list(li)) {
        li = malloc(sizeof(*li));
        if (li == NULL)
            return NULL;
        li->length = 0;
        li->begin = new_node;
        li->end = new_node;
    } else {
        li->end->next = new_node;
        new_node->prev = li->end;
        li->end = new_node;
    }
    li->length++;
    return li;
}

int sorted_already(DList li)
{
    DListNode *new_node = li;

    if (list_length(li) <= 1)
        return 1;
    for (; new_node->next->next != NULL; new_node = new_node->next)
        if (new_node->value > new_node->next->value)
            return 0;
    if (new_node->value > new_node->next->value)
        return 0;
    return 1;
}