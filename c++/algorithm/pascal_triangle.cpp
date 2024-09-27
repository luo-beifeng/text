//杨辉三角
#include <iostream>
using namespace std;

int triangle(int nums, int arr[]);
int main()
{
    int nums = 0;
    int a = 0;
    int arr[10][10] = {0};
    for(int i = 0; i < 10; i++)
    {

        for(int j = 0; j <= i; j++)
        {
        if(j == 0 || i == j )
            {
                arr[i][j] = 1;
            }
        else
            arr[i][j] = arr[i - 1][j - 1] + arr[i -1][j];
        }
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10 - i - 1; j++)
        {
            cout << " ";
        }
        for(int j = 0; j <= i; j++)
        {
            if(!(i == j))
            {
                cout << arr[i][j] << " ";
            }
            else
                cout << arr[i][j] <<endl;
                
        }
    }

    //triangle(10, arr);
}

/*
int triangle(int nums, int arr[])
{
    int a = 0;
    if (nums == 0)
    {
        return 1;
    }
    a = triangle(nums - 1, arr);
    cout << a << endl;

}
*/