#include <iostream>
using namespace std;
 int main()
{
    int arr[] = {1,3,5,7,9,2,4,6,8,10};

    // 初始化虚拟数组
    int index = -1;

    for (int i = 0; i < 10; i++)
    {
        index = i;

        for (int j = i + 1 ; j < 10 - 1; j++)
        {
            if (arr[index] > arr[j])
            {
                index = j;
            }
        }
        
        if (index !=i)
        {
                arr[i] += arr[index];
                arr[index] = arr[i] - arr[index];
                arr[i] = arr[i] - arr[index];
        }
    
    }
    for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        
}