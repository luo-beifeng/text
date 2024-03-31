#include<stdio.h>
#include<stdlib.h>
/**
开始对每行进行布雷

@param andArr 雷的行数组
@param num 行数
@param mineCout2 雷的数目
@return 返回雷的行数组
*/
void mineTotal1(int randArr[], int num, int mineCount, int mineCount2)
{

    for (int  i = 0; i < num &&mineCount >= 0; i++)
	{
		randArr[i] = rand()%(2);  // 每行的雷数量最大小于总雷数
		mineCount2 += randArr[i];  //用于布置雷之后确定布置的个数
		// printf("%d ", randArr[i]);
		mineCount -= randArr[i];  // 每次布雷后剩余雷的数目
	}
	 

	// 如果雷没有布置完，就随机找几行加1
	while(mineCount!=0)
	{
		int n = 0;
		n = rand()%(9) + 1;
		randArr[n] += 1;
		--mineCount;
		++mineCount2;
	}

	// 将布置下的雷数，赋值给数组的最后一个元素
	randArr[10] = mineCount2;
}


// int main(void)
// {
// 	srand(time(0));
// 	int arr[11];
// 	mineTotal1(arr, 10, 10, 0);
// 	printf("%d\n ", arr[10]);
// 	for(int i = 0; i < 10; i++)
	
// 	printf("%d ", arr[i]);
// }