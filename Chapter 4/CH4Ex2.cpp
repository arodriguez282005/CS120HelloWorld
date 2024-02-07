#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    int total;
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;
    if (total > 0)
        cout << "Positive" << endl;
    else
        cout << "Negative" << endl;

}