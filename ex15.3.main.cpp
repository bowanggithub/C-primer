#include <iostream>
#include <string>
#include <map>
#include <functional>
#include "ex15.3.h"

double print_total(std::ostream& os, const Quote& item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN:" << item.isbn() << "# sold: " << n << "total due: "
        <<ret << std::endl;
    return ret;
}
