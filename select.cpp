#include <iostream>
using namespace std;

//选择排序（初级选择排序算法）: 由小到大
/*
// int main(int argc, char* argv[]){
  
//   // 初始化数组
//   int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

//   // 初级选择排序算法(本代码的目标是升序)
//   for (int i = 0; i < 10; i++)
//   {
//     for (int j = i+1; j < 10; j++)
//     {
//         if (arr[i] > arr[j])
//         {
//             arr[i] += arr[j];
//             arr[j] = arr[i] - arr[j];
//             arr[i] = arr[i] - arr[j];
//         }
//     }
//   }

//   for (int i = 0; i < 10; i++)
//   {
//     cout << arr[i] << endl;
//   }
// }
*/

// 选择排序（高级选择排序算法） : 由小到大
int  main()
{

// 初始化一个数组
int arr[10] = {1,3,5,7,9,2,4,6,8,10};

// 初始化一个模拟下标，用于模拟数组中的元素
int index = 0;

 // 快速排序的核心算法
for (int i = 0; i < 10 ; i++)
{

// 每次操作完这个模拟下标，就将其初始化：让它等同于将要操作的第i个元素的下标
    index = i;

// 将第i个元素与第i+1个元素进行比较
    for (int j = i + 1; j < 10; j++)
    {

// 依次判断模拟下标所在的数据与后面元素的大小，：这里的模拟下标所对应的数据初始化为第i个元素，一旦它比后面的小，就会模拟出后面元素的值。
        if (arr[index] > arr[j])
        {

// 如果模拟下标所对应的元素比后面的元素大， 就将后面的元素的下标赋值给前面元素的下标
            index = j;
        }

    }

// 在上面的代码中，可以看出，哪怕用一个变量也可以代替index模拟数组的作用，但是，由于for循环中创建变量的局部性与动态性，j的值不容易带出来，或者说，及时用变量带出来了，也多浪费了4个字节的内存
// 此时的模拟数组数据就可以充当最后一次被赋值的元素了。即：arr[j] == arr[index]  ==> TRUE
// 该变量其实是为了将arr[j]与arr[i]进行数据交换，但是arr[index]就可以充当arr[j]的角色了
    if (index!= i)
    {

        arr[index] += arr[i];
        arr[i] = arr[index] - arr[i];
        arr[index] = arr[index] - arr[i];
    }
}

// 输出排序后的数组
for (int i = 0; i < 10; i++)
{
    cout << arr[i] << " ";
}



}