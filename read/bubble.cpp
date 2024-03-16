#include <iostream>
using namespace std;

// 冒泡排序的实现与优化
int main(int argc, char *argv[])
{

// 优化方案: 定义一个标记，来确定数组中途是不是已经排序完成
int flag = -1;

    // 初始化数组
    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

    // 冒泡排序核心算法(本代码的目标是升序)
    for (int j = 10; j > 1; j--)  // 初级算法是循环次数等于数组内部元素总量，可利用标记位优化
    {
        for (int i = 0; i < j; i++) // 循环次数是根据排列好元素之后，用数组内元素总数减去排列好的元素个数
        {
            if (arr[i] > arr[i + 1])  // 如果当前元素大于后一个元素，则交换位置(相比用临时变量，节省了内存)
            {
                arr[i] += arr[i + 1];
                arr[i + 1] = arr[i] - arr[i + 1];
                arr[i] = arr[i] - arr[i + 1];
                flag = 1;
            }
        }

        // 优化方案: 若数组是已经排序完成，则跳出循环
        if (flag == -1)
        {
            break;
        }
  
    
    }

    for (int i = 0; i < 10; i++)
        cout << arr[i] << endl;
}
