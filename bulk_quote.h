#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H
#include "disc_quote.h"

class Bulk_quote : public Disc_quote
{
public:
    Bulk_quote() {std::cout << "default constructing Bulk\n";};
    Bulk_quote(const std::string& b, double p, std::size_t q, double disc) : Disc_quote(b,p,q,disc)
    { std::cout << "Bulk: constructer with 4 parameters\n";}
    Bulk_quote(const Bulk_quote& bq) : Disc_quote(bq)
    {
        std::cout << "Bulk: copy constructor\n";
    }
    Bulk_quote(Bulk_quote&& bq) noexcept : Disc_quote(std::move(bq))
    {
        std::cout << "Bulk: move constructor\n";
    }

    Bulk_quote& operator =(const Bulk_quote& rhs)
    {
        Disc_quote::operator=(rhs);
        std::cout << "Bulk: copy=()\n";
        return *this;
    }

    Bulk_quote& operator =(Bulk_quote&& rhs)
    {
        Disc_quote::operator=(std::move(rhs));
        std::cout << "Bulk: move=()\n";
        return *this;
    }
    double net_price(std::size_t n) const override;
    void debug() const override;
    ~Bulk_quote() override
    {
        std::cout << "destructing Bulk\n";
    }
};


#endif
