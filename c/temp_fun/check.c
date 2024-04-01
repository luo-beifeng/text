#include<stdio.h>
#include"../head/mine.h"


/**
检查周围格子中雷的个数

@param arr 面向开发者的数组
@param i 左上方
@param j 右上方
@param mineModel 雷
@return 雷的总数
*/
int check(int arr[][10], int i, int j, int mineModel) 
{
    int count = 0;
    for (int x = -1; x <= 1; x++) 
    {
        for (int y = -1; y <= 1; y++) 
        {
            if (i + x >= 0 && i + x < 10 && j + y >= 0 && j + y < 10) 
            {
                if (arr[i + x][j + y] == mineModel) 
                {
                    count++;
                }
            }
        }
    }
    arr[i][j] = count;
}
