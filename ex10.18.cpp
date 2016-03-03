#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void println(const T& v)
{
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

void elimdups(vector<string>& vs)
{
    sort(vs.begin(),vs.end());
    auto new_end=unique(vs.begin(),vs.end());
    vs.erase(new_end,vs.end());
}

void biggies(vector<string>& vs, size_t sz)
{
    elimdups(vs);
    stable_sort(vs.begin(),vs.end(),
            [] (const string& s1, const string& s2)->bool
            {return s1.size() < s2.size();});
    auto pivot = partition(vs.begin(),vs.end(),
            [sz] (const string& s) {return s.size() >= sz;});
    //auto wc = find_if(vs.begin(),vs.end(),
    //        [sz] (const string& s) ->bool {return s.size() >= sz;});
    for_each(vs.begin(),pivot, [](const string& s) {cout << s << " ";});
    cout << endl;
}

int main()
{
    vector<string> v{"1","22","333","4444","55555","666666","666666",
            "7777777","7777777","999999999"};
    biggies(v,4);
    return 0;
}

