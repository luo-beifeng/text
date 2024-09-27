#include<stdio.h>
#include"../head/mine.h"


/**
面向开发者的页面

@param arr 开发者的数组
@param row 对应行
@param col 对应列
@param mineModel 雷的标记
@return 无
*/
void **develop(int arr[][10], int row, int col, int mineModel)
{
        for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <10 ; j++)
		{
			if(arr[i][j] == mineModel)
			{
				printf("%c ", arr[i][j]);
			}
			else
			{
				printf("%d ", arr[i][j]);

			}
		}
        printf("\n");
    }
}

