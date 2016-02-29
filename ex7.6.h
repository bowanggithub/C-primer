#include <string>
#include <iostream>

struct Sales_data
{
    std::string const & isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);

    str::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

std::istream& read(std::istream& is, Sales_data& item)
{
    double price;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * items.units_sold;
    return is;
}

std::ostream& print(std::ostream& os, Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum=lhs;
    sum.combine(rhs);
    return sum;
}
