#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> intvec{1,2,3,4,5,6,7,8,9,0};
    for (auto i=intvec.begin(); i != intvec.end(); i++)
    {
        *i *= 2;
    }
    for (auto i=intvec.begin(); i != intvec.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}
