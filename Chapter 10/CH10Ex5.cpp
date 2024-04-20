#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string str = "John,20010001,Computer,Male,2024";
    string sub;
    char record[100][100];
    stringstream ss;
    int i = 0;
    
    ss << str;
    getline(ss, sub, ','); // ss >> sub
    cout << sub << endl;

    while(ss.getline(record[i], 256, ','))
        cout << record[i++] << endl;
}