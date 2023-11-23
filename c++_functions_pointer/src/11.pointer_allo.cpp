#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int *int_ptr {nullptr};

    cout << "分配前的int_ptr的值是: " << int_ptr << endl; // 0x0
    int_ptr = new int; // 在heap堆上分配一个int类型的内存空间，返回该内存空间的地址
    cout << "分配后的int_ptr的值是: " << int_ptr << endl; // 0x7ffeeb5c9f7c
    cout << *int_ptr << endl; // 0

    *int_ptr = 100; // 通过指针修改内存空间的值
    cout << *int_ptr << endl; // 100

    delete int_ptr; // 释放内存空间
   

    size_t size {0};
    double *temp_ptr {nullptr};
    cout << "多少个温度值？";
    cin >> size;
    temp_ptr = new double[size]; // 在heap堆上分配size个double类型的内存空间，返回该内存空间的地址
    cout << "地址是: " << temp_ptr << endl;
    delete [] temp_ptr; // 释放内存空间


    return 0;
}