#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{1,2,3,4,5,6,7,8,9};
    list<int> l1,l2,l3;

    copy(v.begin(),v.end(),inserter(l1,l1.begin()));
    for (auto i: l1)
        cout << i << " ";
    cout << endl;

    copy(v.begin(),v.end(),back_inserter(l2));
    for (auto i: l2)
        cout << i << " ";
    cout << endl;

    copy(v.begin(),v.end(),front_inserter(l3));
    for (auto i: l3)
        cout << i << " ";
    cout << endl;

    return 0;
}
