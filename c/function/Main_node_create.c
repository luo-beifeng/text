#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../head/linked.h"
#include "../head/student.h"

/**
链表的实现
*/
int main(int argc, char **argv)
{
    // 写入学生的信息，暂存在指针stu里，用于下一步当参数传给node 中
    Student * stu = create_new_student(1, "xuen", 1000, 'F');

    // 创建node节点，该节点用于存储上一个节点以及下一个节点和学生的信息
    Node * node = create_new_node(stu);

    printf("结点 : %p\n", node);
    printf("当前结点存储学生编号 : %d\n", node->data->id);
    printf("当前结点存储学生姓名 : %s\n", node->data->name);
    printf("当前结点存储学生年龄 : %d\n", node->data->age);
    printf("当前结点存储学生性别 : %c\n", node->data->gender);

}