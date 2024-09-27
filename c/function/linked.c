#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../head/linked.h"

LinkedHead * create_linked_head()
{
    LinkedHead * head = (LinkedHead *)malloc(sizeof(LinkedHead));
    head->first = NULL;
    head->last = NULL;
    head->size = 0;
    return head;
}

Node * create_new_node(Student * data)
{
    Node * node = (Node *)malloc(sizeof(Node));
    node->prev = NULL;
    node->next = NULL;
    node->data = data;
    return node;
}