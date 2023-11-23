#include <iostream>
using namespace std;

// 定义函数
void swap_value(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    // 函数调用
    int x {100}, y {200};
    cout << "交换前，x的值是: " << x << endl; // 100
    cout << "交换前，y的值是: " << y << endl; // 200

    swap_value(&x, &y); // 将变量x和y的地址传递给函数
    cout << "====================" << endl;
    cout << "交换后，x的值是: " << x << endl; // 200
    cout << "交换后，y的值是: " << y << endl; // 100

   

    return 0;
}