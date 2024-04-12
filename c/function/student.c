#include "../head/student.h"

/**
指针函数 用于存储用户的身份信息

@param id 学生的编号
@param *name 学生的姓名
@param age 学生的年龄
@param gender 学生的性别
@return 返回学生结构体的首地址 
*/
Student * create_new_student(int id, char *name, int age, char gender)
{

    // 创建一个指针指向结构体（学生类型）
    Student * stu = (Student *)calloc(1,sizeof(Student));

    // 取形参值赋予结构体成员
    stu->id = id;
    strcpy(stu->name, name);
    stu->age = age;
    stu->gender = gender;

    // 返回结构体首地址
    return stu;
}