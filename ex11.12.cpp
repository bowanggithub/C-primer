#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    vector<pair<string,int>>  vec;
    string str;
    int i;
    while (cin >> str >> i)
        vec.push_back(pair<string,int>(str,i));

    for (auto x : vec)
        cout << x.first << ":" << x.second << endl;

    return 0;
}
