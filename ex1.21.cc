#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item item1, item2, item;
    cin >> item1 >> item2;
    item = item1 + item2;
    cout << item;
    return 0;
}
