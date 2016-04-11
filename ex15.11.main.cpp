#include <iostream>
#include <string>
#include "quote.h"
#include "bulk_quote.h"

void print_debug(const Quote& q);
double print_total(std::ostream& os, const Quote& item, size_t n);

int main()
{
    Quote q("aaa",10.60);
    Bulk_quote bq("bbb",111,10,0.3);

    Quote& r = q;
    r.debug();
    r=bq;
    r.debug();

    print_debug(q);
    print_debug(bq);
}

void print_debug(const Quote& q)
{
    q.debug();
}
