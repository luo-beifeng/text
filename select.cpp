#include <iostream>
using namespace std;

int main()
{
    int temp = 0;
    int  index = 0;
    
    int arr[] = {1,3,5,7,9,2,4,6,8,10};
    for (index = 0; temp < 10; temp++)
    {
        index = temp;
        for (int i = index+1; i<10; i++){
        if (arr[i] > arr[index])
        {
            index = i;
        }

    }
    if(index != temp)
    {
        arr[index] += arr[temp];
        arr[temp] = arr[index] - arr[temp];
        arr[index] = arr[index] - arr[temp];
    }   
    } 

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
