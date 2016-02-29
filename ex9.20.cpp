#include <list>
#include <deque>
#include <iostream>
using namespace std;

int main()
{
    list<int> l{1,2,3,4,5,6,7,8,9,0};
    deque<int> d1,d2;
    for (auto iter=l.cbegin();iter != l.cend(); iter++)
    {
        if ((*iter)%2 == 0)
            d1.push_back(*iter);
        else
            d2.push_back(*iter);
    }
    for (auto iter=l.cbegin();iter != l.cend();iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    for (auto iter=d1.cbegin();iter != d1.cend();iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    for (auto iter=d2.cbegin();iter != d2.cend();iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
