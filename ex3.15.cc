#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    cout << "Enter the sequence of strings: ";
    vector<string> strseq;
    string str;
    while (cin >> str)
    {
        strseq.push_back(str);
    }
    return 0;
}
