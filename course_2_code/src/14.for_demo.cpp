#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 简单的for demo
    // for(int i {1}; i <= 10; ++i)
    //     cout << i << endl;



    // 每次i增加2
    // for (int i {1}; i <= 10; i += 2)
    //     cout << i << endl;



    // 从10递减到1
    // for (int i {10}; i >= 1; --i)
    //     cout << i << endl;


    
    // 循环中添加if语句
    // for (int i {1}; i <= 10; ++i){
    //     if (i % 2 == 0)
    //         cout << i << "是偶数" << endl;
    //     else
    //         cout << i << "是奇数" << endl;
    // }



    // 2个参数
    for (int i {1}, j {5}; i <= 5; ++i, ++j)
        cout << i << " * "<< j << " = " << (i * j) << endl;


    // 遍历vector
    vector <int> nums {1,2,3,4,5,6,7,8,9,10}; // 初始化vector

    for (unsigned i {0}; i < nums.size(); ++i) // 要使用unsigned，否则会报警 
        cout << nums[i] << endl;



    return 0;
}