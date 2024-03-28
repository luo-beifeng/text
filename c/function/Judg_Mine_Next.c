#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include"../head/mine.h"

/**
判断是雷，则退出

@param arr 开发者的数组
@param row 对应行
@param col 对应列
@param mineModel 雷的标记
@return 是否是雷的标记
*/
int Judg_Mine(int arr[][10],int row, int col, int mineModel)
{
    if (arr[row][col] == mineModel)
		{
			printf("运行结束，位置row = %d, col = %d是雷\n",row +1 ,col + 1);
			develop(arr, 10, 10, mineModel);
            return 1;
		}
    return 0;
}

/**
计算雷周围的数字

@param arr 开发者的数组
@param row 对应行
@param col 对应列
@param mineModel 雷的标记
@return 是否是雷的标记
*/
int (*Judg_Mine_Next(int arr[][10],int row, int col, int mineModel))[10]
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] != mineModel) {
                int count = 0;
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        if (i + x >= 0 && i + x < row && j + y >= 0 && j + y < col) {
                            if (arr[i + x][j + y] == mineModel) {
                                count++;
                            }
                        }
                    }
                }
                arr[i][j] = count;
                // printf(arr[i][j]);
            }
        }
    }
    return arr;
}