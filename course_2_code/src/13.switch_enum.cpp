#include <iostream>
using namespace std;

int main()
{
    enum Traffic_light {red, yellow, green}; // 枚举类型
    Traffic_light light_color {yellow};

    switch (light_color){
        case red:
            cout << "红灯" << endl;
            break;
        case yellow:
            cout << "黄灯" << endl;
            break;
        default: // 必须加上default，否则编译器会警告
            cout << "ok" << endl;
    }

}