#include <iostream>
using namespace std;

// 这个例子可以计算房间面积
int main()
{
    int room_width {0};
    cout << "请输入房间的宽度：";
    cin >> room_width;
 
    int room_length {0};
    cout << "请输入房间的长度：";
    cin >> room_length;

    cout << "房间面积是：" << room_width * room_length << "平方米" << endl;

    return 0;

}