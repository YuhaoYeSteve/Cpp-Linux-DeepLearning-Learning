#include <iostream>
using namespace std;

// 返回动态分配的内存
int *create_array(size_t size, int initial_value = 0)
{
    int *new_storage{nullptr};

    new_storage = new int[size]; // 分配内存

    for (size_t i{0}; i < size; i++)
    {
        // 初始化值
        *(new_storage + i) = initial_value;
        // new_storage[i] = initial_value; // 等价于上一行
    }
    return new_storage;
}

// 显示数组
void display(int *array, size_t size)
{
    for (size_t i{0}; i < size; i++)
    {
        cout << *array++ << " ";
    }
    cout << endl;
}

int main()
{
    size_t size{};
    int value{};
    int *new_arr{nullptr};

    cout << "请输入数组的大小: ";
    cin >> size;
    cout << "请输入数组的初始值: ";
    cin >> value;

    new_arr = create_array(size, value); // 动态分配内存

    display(new_arr, size); // 显示数组

    delete[] new_arr; // 释放内存

    return 0;
}