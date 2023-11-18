#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // 全部初始化为空
    char first_name [20] {};
    char last_name [20] {};
    char full_name [50] {};
    char temp [50] {};

    // // 用户输入
    // cout << "请输入您的姓：";
    // cin >> first_name;
    // cout << "请输入您的名：";
    // cin >> last_name;

    // cout << "----------------------------------------" << endl;
    // cout << "您的姓：" << first_name << "，一共有 " << strlen(first_name) << " 个字符" << endl;
    // cout << "您的名：" << last_name << "，一共有 " << strlen(last_name) << " 个字符" << endl;

    // // 拼接名字
    // strcpy(full_name, first_name); // 拷贝 first_name 到 full_name
    // strcat(full_name, " "); // 拼接空格
    // strcat(full_name, last_name); // 拼接 last_name
    // cout << "您的全名是：" << full_name << endl;




    // cout << "----------------------------------------" << endl;
    // cout << "请输入您的全名：";
    // cin >> full_name; // 有空格的话，只会读取到空格前的内容
    // cout << "您的全名是：" << full_name << endl;


    cout << "----------------------------------------" << endl;
    cout << "请输入您的全名：";
    cin.getline(full_name, 50);  // 读取一行，包括空格
    cout << "您的全名是：" << full_name << endl;


    cout << "----------------------------------------" << endl;
    // 比较字符串
    strcpy(temp, full_name); // 拷贝 full_name 到 temp

    if (strcmp(temp, full_name) == 0) // 比较 temp 和 full_name

        cout << temp << " 和 " << full_name << " 是相同的" << endl;
    else
        cout << temp << " 和 " << full_name << " 是不同的" << endl;


    cout << "----------------------------------------" << endl;
    // 将字符串转换为大写
    for(size_t i {0}; i < strlen(full_name); i++){
        if (isalpha(full_name[i])){ // 判断是否是字母
            full_name[i] = toupper(full_name[i]); // 转换为大写
        }else{
            full_name[i] = '*';
        }
        
    }
    cout << full_name << endl;


    return 0;
}