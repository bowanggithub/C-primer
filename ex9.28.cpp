#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

void find_and_insert(forward_list<string>& fstr, const string& to_find,
                    const string& to_insert)
{
    auto prev=fstr.before_begin();
    auto curr=fstr.begin();
    while (curr != fstr.end() && *curr != to_find)
    {
        prev=curr;
        curr++;
    }
    if (curr == fstr.end())
        fstr.insert_after(prev,to_insert);
    else
        fstr.insert_after(curr,to_insert);
}

int main()
{
    forward_list<string> fstring{"asd", "fgh", "zxc","qwe"};
    for (auto iter=fstring.cbegin(); iter != fstring.cend(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    find_and_insert(fstring, "asd", "dsa");
    for (auto iter=fstring.cbegin(); iter != fstring.cend(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}

