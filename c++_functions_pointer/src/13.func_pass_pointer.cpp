#include <iostream>
using namespace std;

// 定义函数
void double_data(int *int_ptr);

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

int main()
{
    // 函数调用
    int value {20};

    cout << "value的值是: " << value << endl; // 20
    double_data(&value); // 传递value的地址
    cout << "value的值是: " << value << endl; // 40

    int *int_ptr {nullptr}; // 声明指针
    int_ptr = &value; // 将value的地址赋值给指针
    double_data(int_ptr); // 传递指针
    cout << "value的值是: " << value << endl; // 80

    return 0;
}