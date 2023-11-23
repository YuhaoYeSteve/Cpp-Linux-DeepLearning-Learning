#include <iostream>
#include <string>
#include <vector>
using namespace std;

void swap(int &a, int &b);
void swap(string &a, string &b);

int main(){
    int a = 1;
    int b = 2;
    cout << "a" << a << endl;
    cout << "b" << b << endl;
    swap(a, b);
    cout << "a" << a << endl;
    cout << "b" << b << endl;
    string string_a = "nihao";
    string string_b = "hello";
    swap(string_a, string_b);
    cout << "string_a" << string_a << endl;
    cout << "string_b" << string_b << endl;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}