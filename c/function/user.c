#include <stdio.h>
#include "../head/mine.h"


/**
面向用户的界面

@param user 用户的数组
@param arr 开发者数组
@param row 对应行
@param col 对应列
@param mineModel 雷的标记
@param *mine_flag 是否判定已经有雷
@return 返回用户数组
*/
int (*users(int user[][10], int arr[][10], int row, int col, int mineModel, int *mine_flag))[10]
{
    if (*mine_flag == 1)
    {
        return user;
    }
    if(row >= 0 && col >=0 &&row<= 10 &&col<= 10)
    {
        user[row][col] = 1;
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) 
        {
            if(user[i][j])
            {
                if(arr[i][j] == mineModel)
                {
                    // *mine_flag= 1;
                    printf("* ");
                    return user;
                }
                else 
                {
                    printf("%d ", arr[i][j]);
                }

            }
            else {
                printf("# ");
            }
        }
        printf("\n");
    }
    return user;
} 