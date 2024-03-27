#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;
    vector<int> vec2(10);
    vector<int> vec3(10, -1);
    vector<int> vec4(vec1);
    vector<int> vec5{1,2,3,4,5};

    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);
    cout << vec1.size() << endl;
    cout << vec1[0] << endl;

    for(int i=0; i < vec5.size(); i++){
        cout << vec5[i] << "\t";
    }

    for(int v: vec5)
        cout << v << "\t";
}