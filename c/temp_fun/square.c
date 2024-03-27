#include  <stdio.h>

int main(void)
{
    float num;
    float temp = 0;
    float temp1 = 0;
    float temp2 = 0;
    float temp3 = 0;
    float index = 0;
    float index1 = 1;
    float j = 1;
    int i1 = 1;
    scanf("%f", &num);
    while(index!=-1)
    {
        temp = 0;
    for (temp; temp <= 100; temp++)
    {
        temp3 = temp1 + temp*j;
        if (temp3*temp3 > num)
        {
            temp = temp - 1;           
            temp1 = temp1 + temp*j;
            j = 1;
            i1 = 1;
            for(; i1<=index1; i1++)
            {
                j = j*0.1;
            }
            index1++;
            if (index1 == 8)  // 控制小数
            {
                index = -1;
                temp2 = temp1;
            }
            break;
            

        }
        else if ( temp*temp == num)
        {
            if(index1 != 1)
            {
                temp2 = temp1;
            }
            else
            {
                temp2 = temp;
            }    
            index = -1;
            break;
        }
        
        
    }}



    // 最后输出
    printf("%.3f\n", temp2);
    return 0;
}