#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include"../head/mine.h"

// 完美数
int main(int argc, char* argv[])

{
	// 初始化种子
	srand(time(0));

	// 初始化雷的个数为10个
	int mineCount = 10;

	// 布置的雷的个数
	int mineCount2 = 0;
	int mine_flag = 0;
	int flag1 = 0; // 用于判定每行的某个位置是否是雷
	int const mineModel = 'F';
	int const userModel = '#';
	int const userModel2 = '*';
	// 初始化数组
	int num = 10;

	// 面向开发者
	int arr[10][10] = {0}; 

	// 面向使用者
	int user[10][10] = {0};

	//初始化第n行
	int rowCount = 0;

    // 用于初始化每行的雷数，定义11行的原因是，最后一个数据用于存储雷的总数
	int randArr[11] = {0};

	// 随机每行的雷的数量 如果行数大于10或者剩余雷的数量小于0
    mineTotal1(randArr, num, mineCount, mineCount2); 

	//总布置雷数
    mineCount2 = randArr[10];
    // printf("%d\n", mineCount2);
	
    // 布置总雷数
    mineTotal(randArr, num, arr, 10, 10, flag1, mineModel);

	// 雷旁边的数字进行计数
    Judg_Mine_Next(arr, 10, 10, mineModel);


	// 面向使用者的页面
	user_init(user, 10, 10);
	uesr_main(user, 10, 10);

    // 面向开发者的页面
    // develop(arr, 10, 10, mineModel);

	// 开始运行
	while (mine_flag == 0)
	{
		// 初始化行与列
		int row1 = -1;
		int col1 = -1;

		// 提醒用户输入
		printf("一共有%d 颗雷，请输入你要翻开的格子所在行与列：", randArr[10]);
		scanf("%d%d", &row1, &col1);

		// 由于数组是从0开始的，为了友好界面，设置从[1][1]开始
		row1 = row1 - 1;
		col1 = col1 - 1;

		// 判断是雷，则跳出
		mine_flag =  Judg_Mine(arr, row1, col1, mineModel);
		if(mine_flag == 1)
		{
			continue;
		}
		// 对用户展开数组
		users(user, arr, row1, col1, mineModel, userModel2, userModel, &mine_flag);
		uesr_main(user, 10, 10);

		// 面向开发者的调试模式
		// develop(arr, 10, 10, mineModel);
				
	}
}

