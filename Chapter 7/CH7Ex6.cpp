#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;
void fillout(vector<int> &);
void printout(vector<int>);
int main()
{
    const int N = 10;
    vector<int> numbers(N);

    srand(time(0));
    fillout(numbers);
    sort(numbers.begin(), numbers.end());

    int insval = 12;
    vector<int>::iterator it;
    for(it=numbers.begin(); it != numbers.end(); it++)
    {
        if(*it > insval)
            break;
    }
    if(it != numbers.end())
        numbers.insert(it, insval);
    else
        numbers.push_back(insval);

    int delval = 2;
    for(it=numbers.begin(); it != numbers.end(); it++)
    {
        if(*it == insval) // *it != insval if doing only one instance
            numbers.erase(it);
            break;
    }

    printout(numbers);
}

void fillout(vector<int> &v)
{
    for(int i = 0; i < v.size(); i++)
        v[i] = rand() % 10;
}

void printout(vector<int> v)
{
    for(int element : v)
        cout << element << "\t";
    cout << endl;
}