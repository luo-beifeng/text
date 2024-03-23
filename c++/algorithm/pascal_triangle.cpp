#include <stdio.h>
int main()
{
    int index = 0;
    int count = 0;
    int flag = 0;
    int flag1 = 0;
    scanf("%d", &count);
    //19
    while(flag == 0)
    {
        flag1++;
        index = index + (count % 10)*(count % 10);
        //81
        count = count / 10;//1
        if (index == 1)
        {
            flag = 1;
        }
        if (count == 0)
        {
            count = index;
            if (flag == 0)
            index = 0;

        }
        if(flag1 == 1000000) //无奈之举
        {
            break;
        }
        // count = count1 + count / 10;10
    }
    if (index == 1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
    
}