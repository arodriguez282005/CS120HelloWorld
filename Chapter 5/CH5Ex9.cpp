#include <iostream>
using namespace std;

int main(){
    int number = 7;
    int prime = 1;
    int i;
    for (int number = 7; number <= 12; number++){
        prime = 1;
        for (int i = 2; i < number; i++){
            if (number % i == 0){
                prime = 0;
                break;
        }
    }
    if (prime)
        cout << "This number is prime " << number << endl;
    else
        cout << "This number is not prime " << number << endl;
    }
}