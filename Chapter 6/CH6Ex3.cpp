#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int &ref = num;
    cout << ref << endl;
    ref += 10;
    cout << ref << endl;
    cout << num << endl;
}