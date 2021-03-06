#include <iostream>
#include <string>
using namespace std;

void replace(string& s, const string& oldVal, const string& newVal)
{
    int pos=0;
    while (pos < s.size()-oldVal.size())
    {
        if (s.substr(pos,oldVal.size()) == oldVal)
        {
            s.replace(pos, oldVal.size(), newVal);
            pos += newVal.size();
        }
        else
            pos++;
    }
}

int main()
{
    string s{"abc abc abc sdfgdsdfsdf"};
    cout << s << endl;
    replace(s,"abc","wxyz");
    cout << s << endl;
    return 0;
}
