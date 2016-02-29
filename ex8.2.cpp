#include <iostream>
using namespace std;

istream& func(istream& is)
{
    string buff;
    while (is >> buff)
        cout << buff << endl;
    is.clear();
    return is;
}

int main()
{
    istream& is = func(cin);
    cout << is.rdstate() << endl;
    return 0;
}
