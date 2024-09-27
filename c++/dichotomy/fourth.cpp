#if 0
/*
第四境界
在答案集上进行二分
第一步：确定答案范围
第二步：验证答案大小
*/
#endif
/*
木材加工
有一些原木，要切成一些长度相同的小段木头，需要得到的小段数目是K, 给定L与K, 计算能够得到的小段木头的最大值。 
*/
#include<iostream>
using namespace std;
int woodCut(int L[],int nums, int K);
int getCount(int L[],int len);
/**
输入：L= [4,6,7,8]; k=3;输出6
想法一: 最小值开始往上遍历
想法二: 最大值
        1. 木头的最大值：所有原木中的最大值；无论K是多少，每段木头的场长度<=原木最大值
        2. 木头最大值=长度和/木头总数
        3. 最大值 = min(所有原木中的最大值, 长度和/木头总数)
*/
int main()
{
    
}

int woodCut(int L[],int nums, int K)
{
    if(L==NULL ||nums==0 )
    {
        return 0;
    }
    int start = 1;
    int end = 0;
    int maxLen = 0;
    long sum = 0;
    for(int l = 0; l<nums; l++)
    {
        end =  L[l]>end? L[l]:end;
        sum+=l;
    }
    end = sum/nums<end? sum/nums:end;
    if(end<1)
        return 0;
    while(start +1<end)
    {
        int mid = start + (end-start)/2;
        if(getCount(L,mid)>=K)
        {
            start = mid;
        }
        else
        {
            end =mid;
        }
    return getCount(L,mid)>=K?end:start;
    }
}

int getCount(int L[],int len)
{
    int cint = 0;
    for (int i = 0; i < len; i++)
    {
        cint += i/len;
    }
    return cint;
}
