#include<stdio.h>

/*
*/
int fei(int argc);

int main()
{
    int a = 0;
    // scanf("%d",&a);
    for (int i = 1; i<=10;i++)
    {
        a = fei(i);
        printf("%d\t",a);
    }
    
}

int fei(int argc)
{

    if (argc == 2)
    {
        return 1;
    }
    if (argc == 1 )
    {
        return 1;
    }
    return fei(argc - 1) + fei(argc - 2);
}