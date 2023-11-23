#include <iostream>
using namespace std;

// 打印数组
void print_arr(const int arr[], size_t size);
// 变更数组内容
void change_arr(int arr[], size_t size);

int main()
{
    // 传递数组给函数
    int student_scores [] {100,99,98,97};

    cout << "数组的地址是：" << student_scores << endl;

    print_arr(student_scores, 4); // 100 99 98 97
    change_arr(student_scores, 4); // 变更数组内容
    print_arr(student_scores, 4); // 60 60 60 60

    // print_arr(student_scores, 4); // 1000 60 60 60


}



void print_arr(const int arr[], size_t size){
    cout << "print_arr函数内数组的地址是：" << arr << endl;

    for (size_t i {0}; i < size; i++){
        cout << arr[i] << " ";
    }
    // arr[0] = 1000; // 不能修改数组内容
    cout << endl;
}

void change_arr(int arr[], size_t size){
    cout << "change_arr函数内数组的地址是：" << arr << endl;

    for (size_t i {0}; i < size; i++){
        arr[i] = 60;
    }
}