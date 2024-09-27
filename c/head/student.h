#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    /**
    id 成员变量
    */
    int id;

    /**
    name 成员变量，数据类型为char 类型数组
    */
    char name[32];

    /**
    age 成员变量
    */
    int age;

    /**
    gender 成员变量
    */
    char gender;

}Student;

// 学生数据函数的函数声明

Student * create_new_student(int id, char name[32], int age, char gender);
#endif