#include <iostream>
using namespace std;

int main()
{
   
    // 输入菜单
    char input_char {};
    do {
        cout << "\n 菜单：" << endl;
        cout << "1. 打印Hello World" << endl;
        cout << "2. 打印Hello C++" << endl;
        cout << "3. 打印Hello C" << endl;
        cout << "q或Q. 退出" << endl;

        cout << "请输入菜单选项：";
        cin >> input_char;

        cout << endl;

        switch (input_char)
        {
            case '1':
                cout << "Hello World" << endl;
                break;
            case '2':
                cout << "Hello C++" << endl;
                break;
            case '3':
                cout << "Hello C" << endl;
                break;
            case 'q':
            case 'Q':
                cout << "退出" << endl;
                break;
            default:
                cout << "输入错误" << endl;
                break;
        }

    } while (input_char != 'q' && input_char != 'Q');

    return 0;
}

