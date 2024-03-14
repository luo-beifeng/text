#include <iostream>
#include <string>
using namespace std;

int main() {
    int index = 0;
    char ch;
    char ch1;
    string input2 = "aaaabbbbcccde";
    string input1 = "bbbcccder";
    bool flag1[26] = {false}; // 标记每个小写字母是否已经出现过
    bool flag2[26] = {false}; // 标记每个大写字母是否已经出现过
    char uniqueChars[26] = {'\0'}; // 存储唯一的字母
    int count = 0;
    for (char ch : input1) {
        if (ch >= 65 && ch <= 90) {  // 检查大写字母
            index = ch - 65;
            if (!flag1[index]) {
                flag1[index] = true;
                // cout << "flag1index: "<<flag1[index];
                // uniqueChars[count++] = ch;
            }
        } else if (ch >= 97 && ch <= 122) {  // 检查小写字母
            index = ch - 97;
            if (!flag2[index]) { 
                flag2[index] = true;
                // cout << "index: "<<index<<" ";
                // uniqueChars[count++] = ch;
                // cout << "flag2index: "<<flag2[index];
                // uniqueChars[count++] = ch;
            }
        }
    }
    cout << "\n" << endl;
    for (char ch1 : input2) {
        if (ch1 >= 65 && ch1 <= 90) {  // 检查大写字母
            int index1 = ch1 - 65;            
            if (flag1[index1]) {       
                uniqueChars[count++] = ch1;               
                }
                } 
        else if (ch1 >= 97 && ch1 <= 122) {  // 检查小写字母
            int index1 = ch1 - 97;
            cout << "下标为: "<<index1<<"标记位为： "<<flag2[index1]<<endl;
            if (flag2[index1] == 0) {
                uniqueChars[count++] = ch1;

                }
                }
        else
        continue;
            }


    // 输出唯一字母数组
    for (int i = 0; i < 26; i++) {
        cout << uniqueChars[i];
        // cout << " flag2==>i: "<< i << "==>值为："<<flag2[i]<<endl;
        
    }

    return 0;
}
