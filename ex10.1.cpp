#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    vector<int> iv{1,2,3,4,5,6,6,6,2};
    cout << "count of 6: " << count(iv.begin(),iv.end(),6) << endl;

    vector<string> sv{"aa","aaa","aa","cc"};
    cout << "count of aa: " << count(sv.begin(),sv.end(),"aa") << endl;

    return 0;
}
