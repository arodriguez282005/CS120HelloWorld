#include <iostream>
using namespace std;
int main ()
{
    //print the summation of only even inputs
    int number;
    int to;
    int from;
    int sum;
    sum = 0;
    cin >> from >> to;
    if (from %2 == 1)
        from += 1;
    for (int i = from ; i < to ; i += 2)
    {
        sum += i;
    }
    cout << "Total " << sum << endl;
}