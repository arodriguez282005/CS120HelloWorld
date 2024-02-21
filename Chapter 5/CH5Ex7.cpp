#include <iostream>
using namespace std;

int main ()
{
    int number;
    int max;
   
    for(int i = 0; i < 5; i++)
    {
        cin >> number;
        
        if (number > max || i==0)
        {
            max = number;
        }

    }
    cout << "Max " << endl;
}