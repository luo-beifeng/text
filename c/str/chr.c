#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define SIZE 40
#define ANSWER "GRANT"
/*
本文件用于记住常用的string.h里面的函数
*/

// strlen 函数：用于计算字符串长度
/*
strlen 函数：计算字符串长度，不会将'\0' 计算在内
sizeof 函数：计算占用内存空间，在计算字符串的时候，会将'\0' 计算在内
*/
void s_strlen(char *str, unsigned int size)
{
    if(strlen(str) > size)
    {
        // strcpy(str + size - 1, '\0'); // 由于这里是静态内存，所以会报段错误
        str[size] = '\0';
    }
} 

// strcat && strncat函数：用于拼接字符串
/*
strcat 函数：直接拼接字符串，不考虑原字符串是否能容纳
strncat 函数：设置拼接字符串的长度·
*/
/**
拼接字符串

@param str 原字符串
@param str1 新加入的字符串
@param len 设置要加入的字符串的长度（当拼接的时候，达到这个长度或者遇到'\0'结束
*/
void s_strcat(char *str, char *str1, int len)
{
    if(len < 0)
    {
        // 采用不考虑长度的情况
        strcat(str, str1);   
    }
     else
     {
        // 采用考虑长度的情况
        strncat(str, str1, len);
     }
}

// strcmp && strncmp函数：用于拼接字符串
/*
strcmp 函数：逐字比较字符。不同的时候如果前面一个字符大，就返回1，如果两字符串相同就返回0 
strncmp 函数：设置拼接字符串的长度·
*/
/**
比较字符串

@param str 原字符串
@param str1 新字符串
@return 逐字比较字符。不同的时候如果前面一个字符大，就返回1，如果两字符串相同就返回0 
*/
int  s_strcmp(char *str, char *str1, int len)
{
    if (len == -1)
    {


    }
}             
char * s_gets(char * st, int n);
// 用于练习字符串的主函数
int main(int argc, char **argv)
{
    char str[80] = "hello world, we are your father";
    
    // 测试使用strlen
    // s_strlen(str, 6);
    // printf("%s", str);

    // 测试使用strcat
    // char str1[] = " and your mother";
    // s_strcat(str, str1, -1);
    // printf("%s", str);

    // 测试使用strncat
    // char str1[] = " and your mother";
    // s_strcat(str, str1, strlen(str1));
    // printf("%s", str);

    // 测试使用strcmp
    char try[SIZE];

    puts("who is buried in Grant's tomb");

    s_gets(try, SIZE);
    while (try != ANSWER)
    {
        puts("No, that's wrong . Try again.");
        s_gets(try, SIZE);
    }
    puts("that is right!");

    

    return(0);
}

// s_gets自定义输入函数的使用
char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
        {
            i++;
            if(st[i] == '\n')
            {
                st[i] = '\0';
            }
            else
            while(getchar() != '\n')
            {
                continue;
            }

        }
    }
    return ret_val;
}