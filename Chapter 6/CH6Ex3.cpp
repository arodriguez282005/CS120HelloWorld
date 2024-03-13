#include <iostream>
using namespace std;

int main()
{
    //int num = 10;
    //int &ref = num;
    //cout << ref << endl;
    //ref += 10;
    //cout << ref << endl;
    //cout << num << endl;

    int num1 = 10;
    int num2 = 100;

    int &ref = num1;
    ref = num2;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << ref << endl;
}