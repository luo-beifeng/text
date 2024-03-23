#include <iostream>
using namespace std; 

// 完成任务：3n+1 的砍刀问题
int main(int argc, char *argv[])
{
    // 初始化变量
    int origin = 0;
    int ret = 0;
    // 输入待砍的数值
    cin >> origin;
    while(origin != 1)
    {
        if (origin%2 == 0)
    {
        origin = origin/2;
    }
    else
    {
        origin = (origin*3 + 1) / 2;
    }
        ret++;
    }
    cout << ret << endl;
    return 0;
    





}