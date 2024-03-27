#include<stdio.h>

int main(void)
{
    int count=0;
    char ch;
    while((ch =getchar()) != 'y')
    if(ch == '\n')
    {
        printf("is it %d \n", ch);
    }

}