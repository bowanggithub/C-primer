#include "quote.h"
#include <iostream>

void Quote::debug() const
{
    std::cout << "data members of this class:\n"
              << "bookNo= " << bookNo << " "
              << "price= " << price << std::endl;
}
