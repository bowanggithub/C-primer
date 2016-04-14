#include <iostream>
#include <vector>
#include <list>
#include <string>

template<typename T, unsigned size>
T* begin(const T(&arr)[size])
{
    return arr;
}

template<typename T, unsigned size>
T* end(const T(&arr)[size])
{
    return arr+size;
}

int main()
{
    std::string s[] = {"sssss","ss","ss","ssssszzzzz"};
    std::cout << *(begin(s)) << std::endl;
    std::cout << *(end(s)-1) << std::endl;
    return 0;
}
