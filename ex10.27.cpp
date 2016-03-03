#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{1,1,1,2,3,4,5,5,5,5,6,7,7,7,7,7,8,9};
    list<int> l;
    unique_copy(v.begin(),v.end(),back_inserter(l));
    for (auto i:l)
        cout << i << " ";
    cout << endl;
    return 0;
}
