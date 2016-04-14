#include <iostream>
#include <string>

template<typename Arr>
void print(const Arr& a)
{
    for (const auto& elem : a)
        std::cout << elem << std::endl;
}

int main()
{
    std::string p[]={"ssss","aaa","dddddd"};
    char c[]={'a','b','c','d'};
    int i[]={1};
    print(i);
    print(c);
    print(p);

    std::cout <<"noexit normally\n";
    return 0;
}
