#include <iostream>
#include <string>
#include <vector>

using namespace std;

void demo_print(int); // 打印整数
void demo_print(double); // 打印浮点数
void demo_print(string); // 打印1个字符串
void demo_print(string, string); // 打印2个字符串
void demo_print(vector <string>); // 打印字符串向量


int main()
{   
    // 函数重载示例，打印不同类型的数据
    demo_print(100);
    demo_print(123.456); //double
    demo_print(123.5f); // float
    demo_print('A'); // 会被转换为整数ascii码
    demo_print("C style string"); // c-style string 被转换为string

    string s {"C++ string"}; // C++ string
    demo_print(s);

    demo_print("C style string ", s); // c-style string 和C++ string

    vector <string> languages {"C++", "Python", "Java"};
    demo_print(languages);

    
    return 0;
}

void demo_print(int num){
    cout << "整数：" << num << endl;
}
void demo_print(double num){
    cout << "浮点数：" << num << endl;
}

void demo_print(string s){
    cout << "字符串：" << s << endl;
}
void demo_print(string s1, string s2){
    cout << s1 << s2 << endl;
}
void demo_print(vector <string> v){
    cout << "字符串向量：" << endl;
    for (auto s: v){
        cout << s << " ";
    }
    cout << endl;
}
