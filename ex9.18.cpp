#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    deque<string> input;
    string str;
    while (cin >> str)
    {
        input.push_back(str);
    }
    for (auto iter=input.begin(); iter != input.end(); iter++)
    {
        cout << *iter << endl;
    }
    return 0;
}
