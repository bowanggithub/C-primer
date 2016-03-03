#include <iostream>
using namespace std;

int main()
{
    int n=3;
    auto add =[n] (int m) -> int {return m+n;};
    cout << add(5) << endl;
    return 0;
}
