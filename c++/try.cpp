#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
    string num = "0";
    int index = 0;
    int index1 = 0;
    cin >> num;
    for (std::string::size_type i = 0; i<num.length(); i++)
    {
        index = index + (int)num[i] - 48;
    }
    index1 = index;
    
    int flag = 0;
    while(index1 !=0)
    {
        index1 /= 10;
        flag ++;
    }
    int temp[flag] = {0}; 
    for (int i = 0; i < flag; i++)
    {
        temp[flag-i] = index%10;
        index/=10;

    }
    for (int i = 0; i < flag; i++)
    {
        switch(temp[i])
        {
            case 1:
            cout << "yi";
            if(i != flag - 1)
            {
                cout <<" ";
            }
            else
                cout<<endl;
            break;
        case 2:
            cout << "er";
            if(i != flag - 1)
            {
                cout <<" ";
            }
            else
                cout<<endl;
            break;
        case 3:
            cout << "san";
            if(i != flag - 1)
            {
                cout <<" ";
            }
            else
                cout<<endl;
            break;
        case 4:
            cout << "si";
            if(i != flag - 1)
            {
                cout <<" ";
            }
            else
                cout<<endl;
            break;
        case 5:
            cout << "wu";
            if(i != flag - 1)
            {
                cout <<" ";
            }
            else
                cout<<endl;
            break;
        case 6:
            cout << "liu";
            if(i != flag - 1)
            {
                cout <<" ";
            }
            else
                cout<<endl;
            break;
        case 7:
            cout << "qi";
            if(i != flag - 1)
            {
                cout <<" ";
            }
            else
                cout<<endl;
            break;
        case 8:
            cout << "ba";
            if(i != flag - 1)
            {
                cout <<" ";
            }
            else
                cout<<endl;
            break;
        case 9:
            cout << "jiu";
            if(i != flag - 1)
            {
                cout<<endl;
            }
            else
                cout<<endl;
            break;
        case 0:
            cout << "ling";
            if(i != flag - 1)
            {
                cout <<" ";
            }
            else
                cout<<endl;
            break;
        }
        
    }
}