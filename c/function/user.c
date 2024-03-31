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
void users(int user[][10], int arr[][10], int row, int col, int mineModel, int userModel2, int userModel, int *mine_flag)
{


        if (row < 0 || row > 10 - 1 || col < 0 || col > 10 - 1 || user[row][col] != 35)
    {
       
        return;
    }
    

    if (arr[row][col] >= 1 && arr[row][col] <= 10) 
    {
        user[row][col] = arr[row][col];
        return;
    }
    

    if (0 == arr[row][col]) 
    {
    	user[row][col] = arr[row][col];
        
        for (int i = row - 1; i <= row+1; i++)
        {
            for (int j = col - 1; j <= col + 1 ; j++)
            users(user, arr, i, j, mineModel, userModel2, userModel, mine_flag);

        }
    }
    }

// 用户页面初始化
void user_init(int user[][10], int row, int col)
{
        for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            user[i][j] = 35;
        }
    }
}

// 用户展示
void uesr_main(int user[][10], int row, int col)
{
    printf("  1 2 3 4 5 6 7 8 9 10");
        for (int i = 0; i < 10; i++)
    {
        if(i != 9)
        printf("\n%d ",i + 1);
        else
        {
            printf("\nB ");
        }
        for (int j = 0; j < 10; j++)
        {
            if (user[i][j] >= 35)
            printf("%c ", user[i][j]);
            else{
                printf("%d ", user[i][j]);
            }
        }
        
    }
    printf("\n");
}
// int main()
// {
//     int user[10][10] = {0};
//     user_init(user, 10, 10);
// 	uesr_main(user, 10, 10);
// }