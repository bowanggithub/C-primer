#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> words{"1","22","333","55555","666666","999999999"};
    int sz=5;
    auto count = count_if(words.begin(),words.end(),
            [sz] (const string& s)->bool {return s.size() >=sz;});
    cout << "count= " << count << endl;
    return 0;
}
