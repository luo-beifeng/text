#ifndef LINK_H
#define LINK_H
#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
Node 节点类型，结构体类型
*/
typedef struct node
{
    /**
    用于存储上一个节点地址的指针 prev
    */
    struct node *prev;

    /**
    每一个Node 节点存储的数据为 Student类型
    */
    Student * data;

    /**
    用于存储下一个节点地址的指针next
    */
    struct node *next;

} Node;

/**
链表头数据类型，结构体形式
*/
typedef struct linked
{
    /**
    存储整个链表的第一个Node的节点地址
    */ 
     Node * first;

    /**
    存储整个链表中的最后一个Node 节点地址
    */
     Node * last;

    /**
    有效元素个数，有效节点个数
    */
     int size;
}LinkedHead;

LinkedHead* create_linked_head();

Node * create_new_node(Student * data);

#endif