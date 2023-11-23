#include <iostream>
using namespace std;

int main()
{
    int student_scores [] {100, 98, 90};
    cout << "student_scores的值是: " << student_scores << endl; 

    int *score_ptr {student_scores}; // score_ptr指向student_scores数组的第一个元素
    cout << "score_ptr的值是: " << score_ptr << endl; 

    cout << "====== 数组名称，下标方式访问元素 ====== " << endl;
    cout << student_scores[0] << endl; // 100
    cout << student_scores[1] << endl; // 98
    cout << student_scores[2] << endl; // 90

    cout << "====== 指针名称，下标方式访问元素 ====== " << endl;
    cout << score_ptr[0] << endl; // 100
    cout << score_ptr[1] << endl; // 98
    cout << score_ptr[2] << endl; // 90

    cout << "====== 指针名称，指针运算符方式访问元素 ====== " << endl;
    cout << *score_ptr << endl; // 100
    cout << *(score_ptr + 1) << endl; // 98
    cout << *(score_ptr + 2) << endl; // 90

    cout << "====== 数组名称，指针运算符方式访问元素 ====== " << endl;
    cout << *student_scores << endl; // 100
    cout << *(student_scores + 1) << endl; // 98
    cout << *(student_scores + 2) << endl; // 90

    cout << "====== ++运算符 ====== " << endl;
    // 但需要注意++会改变指针的值，下次访问的就不是原来的位置了
    cout << *score_ptr++ << endl; // 100
    cout << *score_ptr++ << endl; // 98
    cout << *score_ptr << endl; // 90

    
    return 0;
}