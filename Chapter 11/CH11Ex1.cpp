#include <iostream>
#include <fstream>
using namespace std;

const int Numscore = 2;
const int N = 10;
struct Student{
    int id;
    string name;
    int score[Numscore];
};

int main()
{
   Student s[N];
   ifstream  ifs;
   ifs.open("students.txt");
   
   int i = 0;
   while (ifs >> s[i].id >> s[i].name ){
    for(int j = 0; j < Numscore; j++){
        ifs >> s.score[j];
        i++;
   }
   }
}