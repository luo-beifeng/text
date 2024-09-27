#if defined
/*
第三境界
在未排序的数据集上进行二分
无法找到一个满足升序或者降序的条件，但是可以根据判断保留有解的一半，或者去除无解的一半
例如：一个房间里有一群学生，仅有一人喷了特别香的香水，导致全教室都是香的，问：怎么找到这个人？
    答案：可以利用将人放在两个教室

*/
#endif

#include<iostream>

using namespace std;

/**
数组用于返回峰值
@param A[] 传入峰值数组
@param nums 数组长度 
@return 返回峰值的下标
*/
int findPeak(int A[], int nums);
/*
一个整数数组，相邻位置数字不一样，A[0] < A[1]
并且A[n-2] > A[n-1]
假定P是峰值位置则满足A[P] >A[P - 1] 且A[P] > A[P + 1]
返回任意一个峰值的位置
*/
int main()
{
    int index = 0;
    int nums = 0;
    cout << "请输入数组长度";
    cin >> nums;
    int A[nums] = {0};
    index = findPeak(A, nums);

}

int findPeak(int A[], int nums)
{
    int start = 0;
    int end = nums - 1;
    while (start + 1 < end)
    {
        int mid = start + (end - start)/2;
        if (A[mid] < A[mid + 1])
        {
            end = mid ;

        }
        else if (A[mid] > A[mid + 1])
        {
            start = mid;
        }
        else
            return mid;

    }
    return A[start ] < A[end] ?end : start; 
}
