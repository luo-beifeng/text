#include<stdio.h>

// 完美数
int main(int argc, char* argv[])

{

	int flag = 0;
	for (int i = 1; i < 1000; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i%j == 0)
			{
				flag = flag + j;
			}
			
		}
		if (flag == i)
		{
			printf("%d\n", i);
		}
            flag = 0;
		
	}

}
