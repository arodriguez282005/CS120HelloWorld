#include <iostream>
using namespace std;
float mysum (int, int);
float myavg (int, int);
void printValue (float, float);

int main(){
    int num1, num2;
    float total, avg;
    cin >> num1 >> num2;
    total = mysum(num1, num2);
    avg = myavg(num1, num2);
    printValue(total, avg);
    
}
void printValue ( float a, float b) { 
    cout << "Total " << a << endl;
    cout << "Average " << b << endl;
}
float myavg(int n1, int n2){
    float avg;
    avg = (n1 + n2) / 2.0;
    return avg;
}
float mysum(int n1, int n2){
    float sum;
    sum = n1 +n2;
    return sum;
}