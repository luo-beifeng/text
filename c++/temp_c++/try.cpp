#include <iostream>

using namespace std;

int main()
{
    // 初始化长度变量, 数组与循环右移次数变量
    int len;  // 数组长度
    int len1 =0;  // 初始化下标
    int count = 0;// 初始化右移次数
    

    // 输入数组的长度和循环右移的次数      
    cin >> len;
    int argv[len] = {0};// 初始化数组

    // 输入数组的每个元素
    for (len1 = 0; len1 < len; len1++)
    {
        cin >> argv[len1];
    }
    for (int i = 0; i < len; i++)
    {
        cout << argv[i] << " ";
    }
    }
