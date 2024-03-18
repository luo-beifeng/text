/*
2. 用户提供一个整数，分解质因数
    例如
        90 ==> 2 * 3 * 3 * 5
        150 ==> 2 * 3 * 5 * 5;

    核心:
        1. 数据如果可以被某一个整数整除，需要再次校验当前数据
        是否可以继续整除目标数据
        2. 循环次数有处理的目标数据绝对，当前目标数据为 1 时
        循环终止。

*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num = 10000;

    cin >> num;
    cout << num << " = ";

    for (int i = 2; i < num; i++)
    {
        // 如果当前 num 可以被 i 整除
        if (num % i == 0)
        {
            // 展示当前 i 对应的数据
            cout << i << " * ";
            // 当前 num /= i, 修改 num 数据
            num /= i;

            // i-- 抵消一次 i++,这时候，也是抵掉非因数的关键步骤
            i--;
        }
    }

    cout << num << endl;

    return 0;
}
