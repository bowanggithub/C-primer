#include <iostream>
#include <vector>
using namespace std;

bool find(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    for (auto iter = beg; iter != end; iter++)
    {
        if (*iter == val)
            return true;
    }
    return false;
}

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    cout << "find or not: "
         << find(vec.begin(),vec.end(),3) << endl;
    return 0;
}
