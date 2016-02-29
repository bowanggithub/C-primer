#include <string>

class Person
{
    friend std::istream& read(std::istream& is, Person& p);
    friend std::ostream& print(std::ostream& os, Person& p);
private:
    std::string name;
    std::string address;

public:
    const str::string& getName() const {return name;}
    const str::string& getAddress() const {return address;}
    Person() = default;
    Person(const string& sname, const string& saddress)
        :name(sname), address(saddress) {}
    Person(std::istream& is) {read(is,*this)}
};

std::istream& read(std::istream& is, Person& p)
{
    is >> p.name >> p.address;
    return is;
}

std::ostream& print(std::ostream& os, Person& p)
{
    os << p.name << " " << p.address;
    return os;
}
