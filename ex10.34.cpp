#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,0};
    for (auto iter=vec.crbegin(); iter != vec.crend(); iter++)
        cout << *iter << " ";
    cout << endl;

    for (auto iter=vec.cend()-1; iter != vec.cbegin(); iter--)
        cout << *iter << " ";
    cout << *vec.begin() << endl;

    auto rit=find_if(vec.rbegin(), vec.rend(), [](int x) {return x==0;});
    auto it=rit.base();
    cout << *(--it) << endl;

    list<int> l;
    copy(vec.rbegin()+3,vec.rbegin()+8,back_inserter(l));
    for (auto x : l)
        cout << x << " ";
    cout << endl;

    return 0;
}

