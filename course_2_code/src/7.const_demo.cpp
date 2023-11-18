#include <iostream>
using namespace std;

int main()
{
    const double pi {3.14159}; // 常量
    cout << "输入半径: ";
    double radius {0};
    cin >> radius;
    cout << "圆的面积是: " << pi * radius * radius << endl;
    
    return 0;
} 