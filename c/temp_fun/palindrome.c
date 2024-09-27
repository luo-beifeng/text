#include <stdio.h>

// 判断是否为回文数
int main()
{
    int num1 = 0;
    int num2 = 0;
    int index1 = 0;
    printf("Enter a number: ");
    scanf("%d", &num1);
    int index = num1;

    if(num1 == 0)
    {
        num2 = num1;
    }
    do
    {        
        num2 =num2*10 + num1 % 10;

        num1 = num1 / 10;
    }while (num1 != 0);
    
    if (index == num2)
    {
        printf("%d 是回文数", index);
    }
    else 
    {
        printf("%d 不是回文数", index);
    }
} 