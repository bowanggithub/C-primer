#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flst{1,2,3,4,5,6,7,8,9,0};
    for (auto iter = flst.cbegin(); iter != flst.cend(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end())
    {
        if (*curr % 2)
            curr = flst.erase_after(prev);
        else
        {
            prev=curr;
            curr++;
        }
    }
    for (auto iter = flst.cbegin(); iter != flst.cend(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
