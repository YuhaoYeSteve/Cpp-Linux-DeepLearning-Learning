#include <iostream>
using namespace std;

int main()
{
    char letter_grade {};
    cout << "请输入你的成绩：";
    cin >> letter_grade;

    switch (letter_grade){
        case 'a':
        case 'A':
            cout << "优秀" << endl;
            break;
        case 'b':
        case 'B':
            cout << "良好" << endl;
            break;
        case 'c':
        case 'C':
            cout << "中等" << endl;
            break;
        case 'd':
        case 'D':
            cout << "及格" << endl;
            break;
        default:
            cout << "输入错误" << endl;

    }
    return 0;
}