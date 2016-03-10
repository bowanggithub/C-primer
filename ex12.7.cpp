#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

void read(shared_ptr<vector<int>> p)
{
    int i;
    cout << "please enter integers:";
    while (cin >> i)
        p->push_back(i);
}

void print(shared_ptr<vector<int>> p)
{
    for (auto x : *p)
        cout << x << " ";
    cout << endl;
}

int main()
{
    //vector<int>* ptr_vi = new vector<int>();
    shared_ptr<vector<int>> ptr_vi = make_shared<vector<int>>();
    read(ptr_vi);
    print(ptr_vi);
    return 0;
}

