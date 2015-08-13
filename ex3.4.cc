#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    cout << "Enter string1: ";
    cin >> s1;
    cout << "Enter string2: ";
    cin >> s2;
    
    if (s1 > s2)
        cout << s1 << " is larger.";
    else if (s1 == s2)
        cout << "They are equal.";
    else
        cout << s2 << " is larger.";

    if (s1.length() > s2.length())
        cout << s1 << " is longer.";
    else if (s1.length() == s2.length())
        cout << "They have the same length.";
    else
        cout << s2 << " is longer.";

    return 0;
}
