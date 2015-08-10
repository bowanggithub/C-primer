#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item item,sum;
    cin >> item;
    sum=item;
    while (cin >> item)
    {
        sum+=item;
    }
    cout << sum;
    return 0;
}
