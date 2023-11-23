#include <iostream>
using namespace std;

int main(){
    int input_num {0};
    const int lower_limit {10};
    const int upper_limit {100};
    
    cout << "请输入一个介于" << lower_limit << "和" << upper_limit << "之间的整数：";
    cin >> input_num;

    if(input_num >= lower_limit){
        cout << "===========条件1============" << endl;
        cout << input_num << "大于等于" << lower_limit << endl;
        cout << input_num << "比" << lower_limit << "大" << (input_num - lower_limit) << endl;
    }
    if(input_num <= upper_limit){
        cout << "===========条件2============" << endl;
        cout << input_num << "小于等于" << upper_limit << endl;
        cout << input_num << "比" << upper_limit << "小" << (upper_limit - input_num) << endl;
    }
    if(input_num >= lower_limit && input_num <= upper_limit){
        cout << "===========条件3============" << endl;
        cout << input_num << "介于" << lower_limit << "和" << upper_limit << "之间" << endl;
        cout << "条件1、2都成立" << endl;
    }
    if(input_num == lower_limit || input_num == upper_limit){
        cout << "===========条件4============" << endl;
        cout << input_num << "在边界点上" << endl;
        cout << "条件1、2、3都成立" << endl;
    }


    return 0;
}