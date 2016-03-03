#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> v{1,2,3,4};
    cout << "sum is: " << accumulate(v.begin(),v.end(),0) << endl;

    vector<double> vd{1.1,2.2,3.3,4.4,5.5,6.6};
    cout << "sum is: " << accumulate(vd.begin(),vd.end(),0.0) << endl;

    return 0;
}
