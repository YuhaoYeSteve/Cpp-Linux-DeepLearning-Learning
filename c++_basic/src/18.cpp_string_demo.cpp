#include <string>
#include <iostream>

using namespace std;

int main()
{
    // // 声明和初始化
    // string s1; // 全部初始化为空
    // string s2 {"hello"}; // 初始化为 hello
    // string s3 {s2}; // 拷贝 s2
    // string s4 {s3, 0, 4}; // 拷贝 s3 的前 4 个字符
    // string s5 {"hello", 3}; // 拷贝 hello 的前 3 个字符
    // string s6 (5, 'x'); // 5 个 x

    // // 打印s1、s2、s3、s4、s5、s6
    // cout << "s1 is empty: " << s1 << endl;
    // cout << "s2 is: " << s2 << endl;
    // cout << "s3 is: " << s3 << endl;
    // cout << "s4 is: " << s4 << endl;
    // cout << "s5 is: " << s5 << endl;
    // cout << "s6 is: " << s6 << endl;


    // // 赋值
    // string s1;
    // s1 = "C++ hello world";
    // cout << "s1 is: " << s1 << endl;

    // string s2 {"course"};
    // cout << "s2 is: " << s2 << endl;
    // s2 = s1;
    // cout << "s2 is: " << s2 << endl;


    // // 拼接
    // string part1 {"C++"};
    // string part2 {"是一门强大的"};
    // string sentence;
    // sentence = part1 + " " + part2 + "语言";
    // cout << sentence << endl;

    // sentence = "C++" + "是一门强大的语言"; // 错误，不能将2个c-style字符串字面量相加


    // 获取字符，更新
    string s1 {"Hello"};
    // 获取元素
    cout << s1[1] << endl; // e
    cout << s1.at(2) << endl; // l

    // 重新赋值
    s1[1] = 'a'; // Hallo
    s1.at(2) = 'X'; // HaXlo
    cout << s1 << endl;


    // 遍历
    // string s1 {"Hello"};
    // for(auto c: s1){ // 可以使用char或auto
    //     cout << c << endl;
    // }


    // for(int c: s1){ // 打印出来的是ASCII码
    //     cout << c << endl;
    // }


    return 0;
}