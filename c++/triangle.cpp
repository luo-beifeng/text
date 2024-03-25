#include <iostream>
using namespace std;
int main()
{
    int numRows;

    cout << "请输入要打印的行数：";
    cin >> numRows;

    for (int i = 0; i < numRows; ++i)
    {
        int number = 1;
        for (int j = 0; j <= i; ++j)
        {
            cout << number << " ";
            number = number * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}
