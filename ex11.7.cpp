#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main()
{
    map<string,vector<string> > famls;
    string lastName, childName;

    while ([&]()->bool 
            {
                cout << "please enter last name:\n";
                return cin >> lastName && lastName != "@q";
            }())
    {
        cout << "enter children's names:\n";
        while (cin >> childName && childName != "@q")
        {
            famls[lastName].push_back(childName);
        }
    }

    for (auto e : famls)
    {
        cout << e.first << ":\n";
        for (auto c: e.second) cout << c << " ";
        cout << endl;
    }

    return 0;
}
