#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string> *const v)
{
    // (*v).at(0) = "kiwi"; // 修改vector中的第一个元素
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
    // v = nullptr; // 修改指针的值
}
void display(int *array, int sentinel)
{
    while (*array != sentinel)
        cout << *array++ << endl;
    cout << endl;
   
}

int main()
{
    // 定义string vector，并打印
    vector<string> my_str {"apple", "orange", "banana"};
    display(&my_str);

    cout << "====================" << endl;
    int student_scores [] {100, 98, 90, 86, 84, -1};
    display(student_scores, -1);


    return 0;
}