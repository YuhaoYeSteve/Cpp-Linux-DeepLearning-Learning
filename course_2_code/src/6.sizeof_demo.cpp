#include <iostream>
#include <climits>

using namespace std;

int main()
{
    cout << "size information" << endl;
    cout << "================================================================" << endl;

    cout << "char:" << sizeof(char) << " bytes." << endl;
    cout << "short:" << sizeof(short) << " bytes." << endl;  
    cout << "int:" << sizeof(int) << " bytes." << endl;
    cout << "long:" << sizeof(long) << " bytes." << endl;
    cout << "long long:" << sizeof(long long) << " bytes." << endl;

    cout << "================================================================" << endl;

    cout << "float:" << sizeof(float) << " bytes." << endl;
    cout << "double:" << sizeof(double) << " bytes." << endl;

    cout << "================================================================" << endl;

    cout << "min and max value defined in climits" << endl;
    cout << "char min:" << CHAR_MIN << ",char max:" << CHAR_MAX << endl;
    cout << "short min:" << SHRT_MIN << ",short max:" << SHRT_MAX << endl;  
    cout << "int min:" << INT_MIN << ",int max:" << INT_MAX << endl;
    cout << "long min:" << LONG_MIN << ",long max:" << LONG_MAX << endl;
    cout << "long long min:" << LLONG_MIN << ",long long max:" << LLONG_MAX << endl;

    cout << "================================================================" << endl;
    cout << "sizeof using variables" << endl;
    int age {31};
    cout << "age is " << sizeof(age) << " bytes" << endl;

    double salary {22.34};
    cout << "salary is " << sizeof(salary) << " bytes" << endl;


    return 0;

}