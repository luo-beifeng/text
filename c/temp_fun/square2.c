#include<stdio.h>

int main()
{
    double k = 0;
    double temp = 0;
    scanf("%lf", &temp);
    double temp2 =  temp*10000;
    for(double i=0; i<9999999; i++)
    {
        if (i*i>temp2)
        {
            k = (i-1)/100;
            printf("%.2lf", k);
            break;
        }
        
    }
    return 0;
}