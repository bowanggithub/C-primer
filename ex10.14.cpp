#include <iostream>
using namespace std;

int main()
{
    int a=1,b=2;
    auto add = [] (int m,int n) -> int {return m+n;};
    cout << add(a,b) << endl;
    cout << [] (int m, int n) -> int {return m*n;} (a,b) << endl;
    return 0;
}
