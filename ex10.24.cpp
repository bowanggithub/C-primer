#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size(const string& s, string::size_type n)
{
    return s.size() < n;
}

int main()
{
    vector<int> v{1,2,3,4,5,6,7,8,9};
    string s{"yoyo!"};
    cout << "first:" << *find_if(v.begin(),v.end(),bind(check_size,s,_1)) << endl;
    return 0;
}
