#include <iostream>
#include <vector>
using namespace std;

int main(){
    string str = "John,20010001,Computer,Male,2024";
    int start = 0;
    int idx, i,j, fidx = 0;
    string sub;
    char record [100][100];
    
    while((idx = str.find(',', start)) != string::npos){
        sub = str.substr(start, idx-start);
        for(i = 0; i< sub.length(); i++){
            record[fidx][i] = sub[i];
        }
        record[fidx][i] = '\0';
        cout << record[fidx++] << endl;
        start = idx + 1;
    }
}