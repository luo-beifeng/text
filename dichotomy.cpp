#include <iostream>
using namespace std;

// 二分法
int main()
{
    // 定义数组初始位置（每次循环中也要进行改变）
    int begin = 0;

    // 定义数组结束位置（每次循环中也要进行改变）
    int end = 9;

    // 初始化：所查找数据的地址，如果在后续找到了，则进行更新
    int index = -1;
    
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //数组为升序时用这个数组来测试

    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; //数组为降序时用这个数组来测试

    // 定义一个标记位: 来判定数组是降序还是升序
    bool flag = arr[end] - arr[begin];

    // 用户确定要查找的数
    int count = 6; 
    cout << "请输入你要查找的数据： " << endl;
    cin >> count ;

    // 判断数组是降序还是升序：(true代表降序)
    if (flag)
    {
        while (arr[begin] > arr[end])
        {

            // 二分法核心算法 ：每次将“下标”除二，并且向下取整，该下标将会确定下一次二分法的范围
            int index1 = (begin + end) / 2;

            // 二分法核心算法 ：如果被查找数，在数组中间数值对应下标的前面，则执行if 里面的语句
            if (arr[index1] < count)
            {
                // 更新 下一次数组范围的结束位置
                end = index1 - 1;
            }

             // 二分法核心算法 ：如果被查找数，在数组中间数值对应下标的后面，则执行 else if 里面的语句
            else if (arr[index1] > count)
            {
                // 更新 下一次数组范围的开始位置
                begin = index1 + 1;
            }

             // 二分法核心算法 ：如果被查找数等于相加除二的数，执行else的内容
            else
            {
                index = index1;
                break;
            }
        }
    }

    // 判断数组是降序还是升序：(false代表升序)
    else 
    {
        while (arr[begin] < arr[end])
        {

            int index1 = (begin + end) / 2;
            if (arr[index1] > count)
            {
                end = index1 - 1;
            }
            else if (arr[index1] < count)
            {
                begin = index1 + 1;
            }
            else
            {
                index = index1;
                break;
            }
        }
    }

    if (index == -1)
        cout << "抱歉，没找到哦" << end;
    else if (flag)
        cout << "在降序数组中找到了数据：" << count << "在数组第: " << index << "个位置";
    else
        cout << "在升序数组中找到了数据：" << count << "在数组第: " << index << "个位置";
    return 0;
}