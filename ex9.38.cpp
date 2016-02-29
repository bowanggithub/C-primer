#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> v;
    string word;
    while (cin >> word)
    {
        v.push_back(word);
        cout << "capacity: " << v.capacity() << endl;
    }

    return 0;
}
