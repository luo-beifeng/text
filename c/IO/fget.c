#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

从文件中读取一个字符数据到程序中，所需参数是对应文件的 FILE 指针。
返回值类型为 int 类型，但是实际有效数据为 int 类型的 【低 8 位】 对应一个字符类型。
int fgetc(FILE * file);

向文件中写入一个字符数据，所需参数是目标写入字符数据和对应的文件 FILE 指针。
参数 int c 虽然是 int 类型，但是实际有效数据为 int 类型的 【低 8 位】 对应一个字符类型。
int fputc(int c, FILE * file);

*/

void test_write();
void test_read();

int main(int argc, char const *argv[])
{
    test_write();
    return 0;
}

void test_write()
{
    FILE * file = fopen("./1.txt", "w+");
    
    fputc('A', file);

    int content = fgetc(file);
    printf("content : %c\n", (char)content);
    printf("content : %d\n", content);
    printf("EOF : %d\n", EOF);

    fclose(file);

}


void test_read()
{
    
    FILE * file = fopen("./1.txt", "r");
#if 0
    int content = fgetc(file);
    printf("content : %c\n", (char)content);

    content = fgetc(file);
    printf("content : %c\n", (char)content);

    content = fgetc(file);
    printf("content : %c\n", (char)content);
#endif 
    int content = -1;

    while ((content = fgetc(file)) != EOF)
    {
        printf("content : %c\n", (char)content);
    }

    fclose(file);
}