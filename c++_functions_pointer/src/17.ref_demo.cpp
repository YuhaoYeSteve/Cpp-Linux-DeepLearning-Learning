#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int my_num {10};
    int &my_ref {my_num}; // 引用

    cout << "my_num: " << my_num << endl;
    cout << "my_ref: " << my_ref << endl;
    my_ref = 100; // 修改引用，my_num也会被修改
    cout << "my_num: " << my_num << endl;
    cout << "my_ref: " << my_ref << endl;


    vector<string> my_str {"Hello", "World", "!"};
    cout << "=====================" << endl;
    for (auto str:my_str) // 这里的str是一个拷贝
        str = "Hello";

    for (auto str:my_str)
        cout << str << endl; // 输出的是原来的字符串
    
    cout << "=====================" << endl;
    for (auto &str:my_str) // 这里的str是一个引用
        str = "Hello";

    for (auto str:my_str)
        cout << str << endl; // 输出的是修改后的字符串
    
    cout << "=====================" << endl;
    for (auto const &str:my_str) // 这里的str是一个常量引用
    {
        // str = "computer"; // 这里会报错，因为str是一个常量引用
        cout << str << endl;
    }
        
    
    return 0;
}