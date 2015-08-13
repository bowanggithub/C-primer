#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("Hello World!!!");
    for (decltype(s.size()) index=0; index != s.size(); index++)
        s[index]='x';
    cout << s << endl;

    string::size_type n=0;
    while (n<= s.size())
    {
        s[n]='y';
        n++;
    }
    cout << s << endl;
    return 0;
}
