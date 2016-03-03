#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template <typename Sequence>
auto println(const Sequence& seq)-> ostream&
{
    for (auto const& elem : seq)
    {
        cout << elem << " ";
    }
    cout << endl;
}

vector<string>& eliminate_duplicates(vector<string>& vs)
{
    sort(vs.begin(),vs.end());
    println(vs);

    auto new_end = unique(vs.begin(),vs.end());
    println(vs);

    vs.erase(new_end,vs.end());
    return vs;
}

int main()
{
    vector<string> vs{"the","quick","red","fox","jumps","over","the",
                    "slow","red","turtle"};
    println(vs);
    println(eliminate_duplicates(vs));

    return 0;
}
