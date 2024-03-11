#include <iostream>
using namespace std;

void mycount (void);

int main (){
    int count;
    count = 0;
    for (int i = 0; 9<5; i++)
        mycount();
}
void mycount(){
static int cnt = 0;
cout << "Called " << ++cnt << " times" << endl;
}