#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

void read(vector<int>* p)
{
    int i;
    cout << "please enter integers:";
    while (cin >> i)
        p->push_back(i);
}

void print(vector<int>* p)
{
    for (auto x : *p)
        cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int>* ptr_vi = new vector<int>();
    read(ptr_vi);
    print(ptr_vi);
    delete ptr_vi;
    return 0;
}

