#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int num1 = 0;
    int flag =1;
    cin >> num1;
    while(num1 != 0)
    {
        // 根据行数来确定每行的星星数量
    for (int i = 0; i < num1; i++ )
    {
        cout << " ";
    }
    for (int j = 0; j < flag; j++)
        {
            cout << "*";
        }
    cout << endl;
    num1--;
    flag+=2;
    }
    
}
