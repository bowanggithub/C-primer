#include "limit_quote.h"

void Limit_quote::debug() const
{
    std::cout << "max_qty= " << this->quantity << " "
              << "discount= " << this->discount << "\n";
}
