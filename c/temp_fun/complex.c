#include <stdio.h>

// int sum(int n);

int main() {

    // 初始化变量
    int num2str = 0;
    
    // 输入数字用于转换成字符串
    scanf("%d", &num2str);

    // 输出字符串
    printf("Hello! %d\n", num2str);
    // printf("Sum of first 4 numbers is: %d\n", sum(4));
    return -1;
}

// int sum(int n) {
//     int ret = 0;
//     for (int i = 1; i <= n; ++i) {
//         ret = ret + i;
//     }
//     return ret;
// }
