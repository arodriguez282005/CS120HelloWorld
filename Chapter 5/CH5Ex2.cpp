#include <iostream>
using namespace std;
int main ()
{
    //print the summation of 1 + 2 + 3+ ... + 10
    int i = 0;
    int sum = 0;

    while (i <= 10)
    {
        sum = sum + i;
        i = i + 1;
        cout << "Sum " << sum << "i " << i << endl;
    }
    cout << sum << endl;
}