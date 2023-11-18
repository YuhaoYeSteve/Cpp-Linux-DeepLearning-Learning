#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<char> vowels; // 空的vector
    vector<char> vowels(5); // 5个元素的vector，初始化为0
    
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};  // 5个元素的vector，初始化为元音字母

    cout << vowels[0] << endl; // 访问第1个元素
    cout << vowels[4] << endl; // 访问第5个元素

    // vector <int> student_scores (3); // 3个整数的vector，初始化为0，使用的是默认构造函数
    // cout << student_scores[0] << endl; // 访问第1个元素

    // vector <int> student_scores (3,100); // 3个整数的vector，初始化为100，使用的是带参数的构造函数
    // cout << student_scores[0] << endl; // 访问第1个元素

    vector <int> student_scores {100, 99, 98}; // 3个整数的vector，初始化为100，99，98，使用的花括号初始化
    cout << "array风格访问：" << endl;
    cout << "三个学生的成绩为：" << student_scores[0] << " " << student_scores[1] << " " << student_scores[2] << endl;

    cout << "====================" << endl;
    cout << "vector风格访问：" << endl;
    cout << "三个学生的成绩为：" << student_scores.at(0) << " " << student_scores.at(1) << " " << student_scores.at(2) << endl;
    cout << "vector大小为：" << student_scores.size() << endl;

    cout << "====================" << endl;
    cout << "修改vector中的元素：";
    cin >> student_scores.at(0);
    cin >> student_scores.at(1);
    cin >> student_scores.at(2);
    cout << "修改后的三个学生的成绩为：" << student_scores.at(0) << " " << student_scores.at(1) << " " << student_scores.at(2) << endl;

    cout << "====================" << endl;
    int new_add_score {0};
    cout << "添加新的成绩：";
    cin >> new_add_score;
    student_scores.push_back(new_add_score);
    cout << "再添加一个新的成绩：";
    cin >> new_add_score;
    student_scores.push_back(new_add_score);
    
    cout << "添加后一共有" << student_scores.size() << "个成绩，分别为：" << endl;
    cout << "第1个成绩为：" << student_scores.at(0) << endl;
    cout << "第2个成绩为：" << student_scores.at(1) << endl;
    cout << "第3个成绩为：" << student_scores.at(2) << endl;
    cout << "第4个成绩为：" << student_scores.at(3) << endl;
    cout << "第5个成绩为：" << student_scores.at(4) << endl;


    // cout << "故意访问不存在的元素：" << endl;
    // cout << "第6个成绩为：" << student_scores.at(5) << endl; // 故意访问不存在的元素，会报错

    cout << "====================" << endl;
    // 定义二维vector
    vector <vector<int>> vector_2d
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout << "array风格打印二维vector第一行：" << endl;
    cout << vector_2d[0][0] << " " << vector_2d[0][1] << " " << vector_2d[0][2] << endl;
    cout << "vector风格打印二维vector第二行：" << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << " " << vector_2d.at(1).at(2) << endl;
    
    

}