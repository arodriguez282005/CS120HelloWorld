#include <iostream>
using namespace std;
int main ()
{
    //print the summation of 10 inputs
    int i = 0;
    int sum = 0;
    int in;


    while (i++ < 10)
    {
        cout << "Enter your value #" << i << endl;
        cin >> in;
        sum += in;
    }
    cout << "Sum is " << sum << endl;
}