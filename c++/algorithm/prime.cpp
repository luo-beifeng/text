#include <iostream>
using namespace std;
int main()
{
    // 初始化输入
    int num1 = 0;
    int num2 = 0;

    //初始化数量
    int ret = 0;

    // 初始化标志位,0的时候代表是素数
    int flag =0; 

    // 开始输入
    cin >> num1 >> num2;
    
    // 第一个 for 用于确定要测试哪个软件
    for (int i = 1; ret<=num2; i++) 
    {

        // 由于 1 不是素数，所以 i = 1 的时候，直接将标记位 置1
        if (i == 1)
        {
            flag = 1;
        }

        // 第二个 for 用于充当测试用的因数
        for (int j = 2; (j*j) <= i; j++) 
        {

            // 将测试数对测试因数进行取余，为0就代表不是素数
            if (i%j == 0 )
            {

                // 为了节省时间，一旦是素数，直接改变标志位，并且跳出循环
                flag = 1;
                break;
            }       
        }

        // 如果是素数
        if (flag == 0)
        {  
            // 素数的数量加一
            ret += 1;

            // 如果数量大于规定的最小数目和小于最大数目
            if (ret>=num1 && ret<=num2)
            {

                // 先输出该素数
                cout << i ;

                // 判断输出素数的数量是否是10的倍数，或者是不是已经输出完毕
                if ((ret - num1 + 1) % 10 == 0 || ret == num2) 
                {

                    // 是10的倍数的话就换行
                    cout  << endl;
                }   
                else 
                {
                    // 不然就输出空格
                    cout  << " ";
                }
            }
        }

        // 重置标志位
        flag = 0;
    }
}