#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    // 成员变量 id ，数据类型为 int 类型
    int id;
    // 使用 char 类型数组存储对应的姓名数据
    char name[32];
    // 成员变量 age，数据类型为 int 类型
    int age;
    // 成员变量 gender 对应性别，采用 char 类型，'M' 男性，'F' 女性
    char gender;
};

int main(int argc, char const *argv[])
{
    /*
    结构体目前的数据类型名称是
        struct student
    
    当前定义了一个结构体变量，变量名是 stu1 占用内存空间 44 个字节.
    */
    struct student stu1;

    /*
    【结构体变量】操作成员变量内容使用的
        运算符是 .
        . ==> 的
    */
    stu1.id = 10;
     strcpy(stu1.name, "Student");
    struct student * stu2 = (struct student *)calloc(1,sizeof(struct student));
    /*
    strcpy(char * dest, const char * src);
        将 src 原数据字符串内容，复制到 dest 目标数组中.
    */

   
    stu1.age = 16;
    stu1.gender = 'M';

    // 通过结构体变量取值结构体中的成员变量数据内容

    printf("编号 : %p\n", stu2);
    printf("编号 : %d\n", stu1.id);
    printf("名字 : %s\n", stu1.name);
    printf("年龄 : %d\n", stu1.age);
    printf("性别 : %c\n", stu1.gender);
    return 0;
}
