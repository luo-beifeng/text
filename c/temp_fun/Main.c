#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include"../head/mine.h"
// 完美数
int main(int argc, char* argv[])

{
	// 初始化种子
	srand(time(0));
	// 初始化雷的个数为5个
	int mineCount = 20;

	// 布置的雷的个数
	int mineCount2 = 0;
	int flag1 = 0; // 用于判定每行的某个位置是否是雷
	int mineModel = 'F';

	// 初始化数组
	int num = 10;
	// 面向开发者
	int arr[10][10] = {0}; 
	// 面向用户
	int user[10][10] = {0}; 



	//初始化第n行
	int rowCount = 0;
	int randArr[10] = {0};

	// 随机每行的雷的数量 如果行数大于10或者剩余雷的数量小于0
	for (int  i = 0; i < num &&mineCount >=0; i++)
	{
		randArr[i] = rand()%(2);  // 每行的雷数量最大小于总雷数
		mineCount2 += randArr[i];  //用于布置雷之后确定布置的个数
		// printf("%d ", randArr[i]);
		mineCount -= randArr[i];  // 每次布雷后剩余雷的数目
	}
	
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
		printf("\n");
	}
	
	// 判定雷旁边的数字
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i][j] != mineModel) {
                int count = 0;
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        if (i + x >= 0 && i + x < 10 && j + y >= 0 && j + y < 10) {
                            if (arr[i + x][j + y] == mineModel) {
                                count++;
                            }
                        }
                    }
                }
                arr[i][j] = count;
            }
        }
    }

	// 面向开发者的页面
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
		/* code */
	}
	// printf("%d ", mineCount2);

	// 面向用户的界面
    // for (int i = 0; i < 10; i++) 
	// {
    //     for (int j = 0; j < 10; j++) {
    //         if (user[i][j]) {
    //             if (arr[i][j] == mineModel) {
    //                 printf("* ");
    //             } else {
    //                 printf("%d ", arr[i][j]);
    //             }
    //         } else {
    //             printf("# ");
    //         }
    //     }
    //     printf("\n");
    // }
}
