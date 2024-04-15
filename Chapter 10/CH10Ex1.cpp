#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[10] = "ABC\0"; // the /0 ends the character string, if not, garbage values
    cout << name << endl;
    cout << strlen(name) << endl;
    cout << int(name[0]) << endl;
    cout << int(name[1]) << endl;
    cout << int(name[2]) << endl;
    cout << int(name[3]) << endl;
}