#include <iostream>
using namespace std;

int main()
{
    string str = "ABC,DEF,GHI,JKLMNOPQRS";
    // finding a substring until the string gets a garbage value
    int start = 0;
    int idx = 0;
    string sub;
    // by checking the index in the check for the while, we insure the code does not create a 
    // run time error while also being able to use the idx within the loop
    while((idx = str.find(',', start)) != string::npos){
        sub = str.substr(start, idx-start);
        start = idx + 1;
        cout << sub << endl;
    }
}