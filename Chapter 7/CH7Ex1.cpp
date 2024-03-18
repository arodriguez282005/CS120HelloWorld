#include <iostream>
using namespace std;

int main()
{
    const int N = 5;
    int number [N] = {10, 20, 30, 40, 50}; 
    int total = 0;
    int min, max;
    min = number[0];
    max = number[0];
    for (int i=0;i<N;i++){
        total += number[i];
        if (i==0 || min > number[i])
            min = number[i];
        if (i==0 || max < number[i])
            max = number[i];
    }
    cout << total << endl;
    cout << min << endl;
    cout << max << endl;
    
}
