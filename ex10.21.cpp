#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n=5;
    auto foo = [&n] () -> bool {if (n<=0) return false; else {n--;return true;}};
    while (foo()) 
        cout << "n= " << n << endl;
    return 0;
}
