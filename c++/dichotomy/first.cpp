// 第一境界
// 写出不会死循环的二分法
// start +(end - start)/2; 防止内存溢出
/*
常见痛点：死循环
start <= end;
start < end;
start + 1 < end;
不确定指针变化是哪一个
start = mid;`4
start = mid + 1;
start = mid - 1;
*/
// 模板
#include <iostream>
using namespace std; 

int binarySearch(int nums[],int target, int temp);
int main ()
{
    int target = 0;
    int index = 0;
    int nums[5] = {0};
    cin >> target;
    index = binarySearch(nums, target, 5);

    
}

int binarySearch(int nums[], int target, int temp )
{
    if(nums == NULL || temp == 0)
    {
        return -1;
    }
    int start = 0, end = temp - 1;
    while (start + 1 < end )
    {
        int mid = start + (end - start )/2;
        if (nums[mid] <target)
        {
            start = mid;
        }
        else if (nums[mid] == target)
        {
            end =mid;
        }
        else 
            end = mid;

    }

    // 这里需要根据题目，再写判定顺序
    if(nums[start] == target)
        return start;
    if(nums[end] == target)
        return end;
    return -1;
}