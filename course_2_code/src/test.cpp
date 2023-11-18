#include <iostream>
#include <vector>
using namespace std;

int main(){
    string zimu = "daye";
    vector <string> zifuchuan {"wocao","nima","legebi"};
    cout << zifuchuan[0] << endl;
    cout << zifuchuan[1] << endl;
    cout << zifuchuan[2] << endl;
    zifuchuan.push_back(zimu);
    cout << zifuchuan[3] << endl;
    cout << zifuchuan[4] << endl;
    // cout << zifuchuan.at(4) << endl;
    vector <char> shuzi('3');
    cout << shuzi[0] << endl;
    return 0;
}
