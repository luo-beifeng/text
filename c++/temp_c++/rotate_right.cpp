#include <iostream>

using namespace std;


//  任务： 连续输入两次数字 ，第一次：输入数组的长度，第二次：输入循环右移的次数
int main()
{
    // 初始化长度变量, 数组与循环右移次数变量
    int len = 0;  // 数组长度
    int len1 =0;  // 初始化下标
    int temp =0; // 初始化一个临时变量
    int count = 0;// 初始化右移次数


    // 输入数组的长度和循环右移的次数
    cout << "输入数组的长度:" << endl;       
    cin >> len>> count;
    
    // 初始化数组
    int argv[len] = {0};// 初始化数组

    // 输入数组的每个元素
    cout << "输入数组元素:" << endl;
    for (len1 = 0; len1 < len; len1++)
    {
        cin >> argv[len1];
    }

    // 循环次数
    while (count > 0)
    {
        // 循环次数减一
        count--;

        // 将数组的最后一位赋值给临时变量
            temp = argv[len-1];

        // 将下标依次加一
        for(int i = len-1; i > 0; i--)
        { 
             // 数组右移
            argv[i] = argv[i - 1];

        }

        // 将临时变量赋值给数组
            argv[0] = temp;
    }
    
    // 输出数组
    cout << "输出数组:" << endl;
    for(int i = 0; i < len ; i++)
    {
        cout << argv[i] << " ";
    }

}

