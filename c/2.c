/* ************************************************************************
 *       Filename:  2.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2024年03月22日 11时32分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
#include <stdio.h> 

int main(void)
{
  int total = 0;
  int choice; 
  
  
   printf("请选择菜品\n");
   printf("1.皮蛋青椒擂茄子39元\n");
   printf("2.砂锅嫩豆腐  58元\n");
   printf("3.香煎金钱蛋  38元\n");
   printf("4.香辣鱿鱼须  69元\n");
   printf("5.结帐 \n");
  
   
  do{
      printf("请输入选项：");
      scanf("%d", &choice);
     switch(choice)
    {
     case 1:
     {
            total += 39;
            printf("您的消费总金额为： %d元 \n",total);
		break;
     }
           
     case 2:
           total += 58;
		   break;	
     case 3:
		   total += 38;
		   break;
	 case 4:
		   total += 69;
		   break;
     case 5:
		   printf("您的消费总金额为：%d 元 \n",total);
           break;
     dafault:
		   printf("无效选项，请重新选择\n");
     }  
    } while(choice != 5);
       return 0;
}




