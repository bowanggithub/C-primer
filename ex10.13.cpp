#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool longerThanFive(const string& s)
{
    return (s.size() >= 5);
}

int main()
{
    vector<string> v{"a","as","aasss","aaaaaasas","asdasdasd","gfhgh"};
    auto pivot = partition(v.begin(),v.end(),longerThanFive);
    for (auto it=v.cbegin();it != pivot;++it)
        cout << *it << " ";
    cout << endl;
    for (auto it=pivot;it != v.end();++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}
