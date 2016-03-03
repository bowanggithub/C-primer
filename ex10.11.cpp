#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

template<typename T>
ostream& println(const T& seq)
{
    for (auto const& elem : seq)
        cout << elem << " ";
    cout << endl;
    return cout;
}

bool is_shorter(const string& lhs, const string& rhs)
{
    return (lhs.size() < rhs.size());
}

void elimdups(vector<string>& vs)
{
    sort(vs.begin(), vs.end());
    auto new_end = unique(vs.begin(),vs.end());
    vs.erase(new_end,vs.end());
}

int main()
{
    vector<string> v1{"the","quick","red","fox","jumps","over",
                    "the","slow","red","turtle"};
    println(v1);
    elimdups(v1);
    println(v1);
    stable_sort(v1.begin(),v1.end(),is_shorter);
    println(v1);

    vector<string> v2{"the","quick","red","fox","jumps","over",
                    "the","slow","red","turtle"};
    stable_sort(v2.begin(),v2.end(),is_shorter);
    println(v2);
    return 0;
}

