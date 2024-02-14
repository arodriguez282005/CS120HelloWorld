#include <iostream>
using namespace std;
int main ()
{
    //take a user input, check whether the input is valid or not
    //if invalid take another input, if valid, print
    int i = 0;
    cin >> i;
    while ((i <= 0) || (i >= 100))
        {
            cin >> i;
        }

}