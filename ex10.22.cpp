#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;
using namespace std::placeholders;

bool check_size(const string& s, string::size_type sz)
{
    return s.size() >= sz;
}

int main()
{
    vector<string> v{"1","22","4444","55555","7777777","999999999"};
    int n=4;
    cout << "count= " << count_if(v.begin(),v.end(),
                bind(check_size,_1,n)) << endl;

    return 0;
}
    
