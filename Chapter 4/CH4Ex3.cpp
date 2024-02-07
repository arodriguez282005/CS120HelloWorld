#include <iostream>
using namespace std;

int main()
{
    int num1;
    cin >> num1 ; 

    if(0 < num1 && num1<100)
        cout << "Value in Range\n" << endl;
    else
        cout << "Value not in Range\n" << endl;
}