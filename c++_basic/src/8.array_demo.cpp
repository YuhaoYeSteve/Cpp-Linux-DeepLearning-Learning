#include <iostream>
using namespace std;

int main(){
    
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "元音字母第1个字母为：" << vowels[0] << endl;
    cout << "元音字母第5个字母为：" << vowels[4] << endl;
    // cin >> vowels[4];
    // cout << "元音字母第5个字母为：" << vowels[4] << endl;
    
    // cin >> vowels[5]; // 试图访问数组的第6个元素，程序会崩溃

    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    cout << "第1天的最高温度为：" << hi_temps[0] << endl;
    hi_temps[0] = 100.7; // 修改第1天的最高温度
    cout << "第1天的最高温度为：" << hi_temps[0] << endl;
    cout << "第6天的最高温度为：" << hi_temps[5] << endl; // 越界访问，可能会得到一个随机值

    cout << "=====================" << endl;

    // int student_scores [5]; // 5个整数的数组，但是没有初始化，数组中的值是未定义的
    // cout << "第1个学生的成绩为：" << student_scores[0] << endl; // 未初始化的数组中的值是未定义的
    int student_scores [5] {}; // 5个整数的数组，初始化为0
    // int student_scores [5] {100}; // 5个整数的数组，初始化为100，其他元素初始化为0，并不是所有的元素都初始化为100

    cout << "第1个学生的成绩为：" << student_scores[0] << endl;
    cout << "第2个学生的成绩为：" << student_scores[1] << endl;
    cout << "第3个学生的成绩为：" << student_scores[2] << endl;
    cout << "第4个学生的成绩为：" << student_scores[3] << endl;
    cout << "第5个学生的成绩为：" << student_scores[4] << endl;

    cout << "重新输入5个学生的成绩：";
    cin >> student_scores[0];
    cin >> student_scores[1];
    cin >> student_scores[2];
    cin >> student_scores[3];
    cin >> student_scores[4];

    cout << "更新后的成绩：" << endl;
    cout << "第1个学生的成绩为：" << student_scores[0] << endl;
    cout << "第2个学生的成绩为：" << student_scores[1] << endl;
    cout << "第3个学生的成绩为：" << student_scores[2] << endl;
    cout << "第4个学生的成绩为：" << student_scores[3] << endl;
    cout << "第5个学生的成绩为：" << student_scores[4] << endl;

    cout << "数组名称为：" << student_scores << endl; // 数组名称为数组的首地址

    cout << "=====================" << endl;
    // 定义一个2维数组
    int movie_ratings [3][4] {
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5}
    };
    cout << "第1部电影的第1个评分为：" << movie_ratings[0][0] << endl;
    cout << "第2部电影的第4个评分为：" << movie_ratings[1][3] << endl;


    return 0;
}