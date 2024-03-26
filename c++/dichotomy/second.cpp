// 第二境界
// 在未排序的数据集上进行二分
// 一般会给一个数组，找出第一个或者最后一个满足条件的位置

/*例如： 存在一个无法列完长度的数组，但是已知：升序，找到目标数第一次出现的位置,时间复杂度为O(log})

倍增法
*/

#include<iostream>
using namespace std;

/**
升序数组进行查找目标数据
@param arr[] 待传入的无限长数组
@param nums 数组长度
@param target 目标数据
@return 返回目标数据的下标
*/
int searchBigSortedAeeay(int  arr[], int nums, int target  );
int main(void)
{
    // 初始化数组，数组长度，待寻找数据
    int nums = 1;  // 初始化长度为1
    int arr[nums] = {0}; //该数组是未知长度的
    int target = 0;// 查找目标数

    target = searchBigSortedAeeay(arr, nums, target );

    cout<<target<<endl;
}

int searchBigSortedAeeay(int arr[], int nums, int target )
{
    while(arr[nums-1] < target)
    {
        // 如果查找数据是小于目标数据，则将范围乘2
        nums *= 2;

    }

    // 开始二分法
    int start = 0;
    int end = nums - 1;
    while(start +1 < end)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid] < target)
        {
            start = mid;
        }
        else 
            end = mid;
    }
    if (start == target) 
        return start;
    if (end == target)
        return end;
    return -1;
}
