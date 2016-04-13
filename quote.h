#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
#include <string>

class Quote
{
    friend bool operator !=(const Quote& lhs, const Quote& rhs);
public:
    Quote() {std::cout << "default constructing Quote\n";};
    Quote(const std::string& b, double p) : 
        bookNo(b), price(p) 
    {std::cout << "Quote: constructing using two parameters.\n";}
    Quote(const Quote& q) : bookNo(q.bookNo), price(q.price)
    {
        std::cout << "Quote: copy constructing\n";
    }
    Quote(Quote&& q) noexcept :
        bookNo(std::move(q.bookNo)),price(std::move(q.price))
    {
        std::cout << "Quote: moving constructing\n";
    }
    Quote& operator =(const Quote& rhs)
    {
        if(*this != rhs)
        {
            bookNo = rhs.bookNo;
            price = rhs.price;
        }
        std::cout << "Quote: copy =()\n";
        return *this;
    }
    Quote& operator =(Quote&& rhs) noexcept
    {
        if (*this != rhs)
        {
            bookNo = std::move(rhs.bookNo);
            price = std::move(rhs.price);
        }
        std::cout << "Quote: move =!!!!!!\n";
    }

    std::string isbn() const {return bookNo;}
    virtual double net_price(std::size_t n) const {return n*price;}
    virtual void debug() const;
    virtual ~Quote() {std::cout << "destructing Quote\n";}
private:
    std::string bookNo;
protected:
    double price = 10.0;
};

bool inline operator !=(const Quote& lhs, const Quote& rhs)
{
    return lhs.bookNo != rhs.bookNo &&
            lhs.price != rhs.price;
}

#endif
