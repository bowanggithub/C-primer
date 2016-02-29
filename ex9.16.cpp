#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    list<int> list{1,2,3,4,5};
    vector<int> vec1{1,2,3,4,5};
    vector<int> vec2{1,2,3,4};

    cout << boolalpha << (vector<int>(list.begin(),list.end()) ==vec1) << endl;
    cout << boolalpha << (vector<int>(list.begin(),list.end()) ==vec2) << endl;

    return 0;
}
