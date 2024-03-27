#include <iostream>

using namespace std;
// 利用动态规划解决最长回文子串
int main()
{
    // 输入一个待判定字符串
    string s = "sadfeergerwqfeq";
    int len = s.length();
    bool dp[len][len];
    char c[22] = s.toCharArray();
    // 初始化dp数组
    for (int i = 0; i < s.length(); i++)
    {
        dp[i][i] = true;
    }

    for (int j = 0; j < len; j++)
    {
        for (int i = 0; i < len-1&&i<j; i++)
        {
            if (s[i] == s[j])
            {
                dp[i][j] = true;
            }
        }
    }
    return 0;
}