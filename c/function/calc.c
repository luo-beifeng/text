#include<stdio.h>
#include"../head/mine.h"
int merge(int num, int num2, int (*p)(int, int))
{
    return p(num, num2);
}
int add(int num, int num2)
{
    return num + num2;
}

int sub(int num, int num2)
{
    return num - num2;
}

int mul(int num, int num2)  
{
    return num * num2;
}