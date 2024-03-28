#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include"../head/mine.h"


/**
开始对每列进行布雷

@param andArr 雷的行数组
@param num 行数
@param arr 开发者数组
@param row 对应行
@param col 对应列
@param flag1 每个位置判断是否要布置雷
@param mineModel 雷的标记
@return 返回开发者的雷的总数组
*/
int (*mineTotal(int randArr[], int num, int arr[][10], int row, int col, int flag1, int mineModel))[10]
{
    
    	// 总雷数布置
	for (int i = 0; i < 10 ; i++)
	{
		for (int h= 0; h < randArr[i]; h++ )
			{
				// printf("%d ", randArr[i]);
				flag1 = rand()%10;
				for (int j = 0; j < 10; j++)
					{
			
						if (flag1 == j)
						{
							arr[i][j] = mineModel;
						}
                        
						
					}					
			// printf("* ");
		}
		// printf("\n");
	}
    return arr;
}
