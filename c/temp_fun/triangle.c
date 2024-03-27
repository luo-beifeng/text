#include <stdio.h>
#include <stdlib.h> 
 
//递归函数
int Yangh(int m,int n)
{
    if(n == 0 || n == m)//递归终止条件
    	return 1;
    return Yangh(m-1,n) + Yangh(m-1,n-1);
}
 
int main() 
{
	int m,i,j;
	printf("请输入要打印的杨辉三角行数：\n");
	scanf("%d",&m);
	
    for(i=0;i<=m;i++)
	{
	    for(j=0;j<m-i;j++)
	        printf(" ");
	    for(j=0;j<=i;j++)
	        printf(" %d",Yangh(i,j));
	    printf("\n");
	}
	return 0;
}