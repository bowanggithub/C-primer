#include <iostream>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int> ilist)
{
    int sum=0;
    for (const auto &elem : ilist)
        sum+=elem;
    return sum;
}

int main()
{
    cout << sum({1,2,3}) << endl;
    return 0;
}
