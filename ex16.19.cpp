#include <iostream>
#include <vector>
#include <list>
#include <string>

template<typename Container>
std::ostream& print(Container& c, std::ostream& os);

template<typename Container>
std::ostream& print2(Container& c, std::ostream& os);

int main()
{
    std::vector<int> v{1,23,6,4,5,7,4};
    std::list<std::string> l{"ss","sszz","saaas","s333s","ss2","sss"};
    print2(v,std::cout);
    print2(l,std::cout);

    return 0;
}


template<typename Container>
std::ostream& print(Container& c, std::ostream &os)
{
    typedef typename Container::size_type size_type;
    auto it = c.begin();
    for (size_type i=0; i != c.size();++i)
        os << *it++ << std::endl;
    return os;
}

template<typename Container>
std::ostream& print2(Container& c, std::ostream& os)
{
    for (auto it= c.begin();it != c.end();++it)
        os << *it << std::endl;
    return os;
}
