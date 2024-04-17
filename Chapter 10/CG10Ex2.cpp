#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[10] = "ABC\0";
    char target[10];
    int len;
    strcpy(target, name);
    len = strlen(target);
    strcat(target, name);
    len = strlen(target);
    cout << name << endl;
    cout << target << endl;
    cout << len << endl;
}