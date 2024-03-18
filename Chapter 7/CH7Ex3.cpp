#include <iostream>
using namespace std;
void printElement(int [], int);
int main ()
{
    const int N = 5;
    int number[N] = {10, 20, 30, 40, 50};
    //print and element which is greater than the left element
    printElement(number, N);
}
    
void printElement(int *number, int N)
{
    for(int i=0; i<N;i++){
        if(i==1){
            cout << number[i] << endl;
            continue;
        }
        if( number [i-1] < number[i] )
            cout << number[i] << endl;
    }
}