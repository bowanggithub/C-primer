#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void readFileToVec(const string& fileName, vector<string>& vec)
{
    ifstream ifs(fileName);
    if (ifs)
    {
        string buf;
        while (getline(ifs, buf))
            vec.push_back(buf);
    }
}

int main()
{
    vector<string> vec;
    readFileToVec("readme.txt", vec);
    for (const auto& str : vec)
        cout << str << endl;
    return 0;
}
