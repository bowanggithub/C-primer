#include <iostream>
#include <vector>
#include <string>

template<typename T>
auto sum(T lhs, T rhs) -> decltype(lhs + rhs)
{
    return lhs+rhs;
}

int main()
{
    auto s=sum<long long>(8765567899876543,987654321234567890);
    std::cout << s << std::endl;
    return 0;
}
