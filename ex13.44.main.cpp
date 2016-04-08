#include <vector>
#include <iostream>
#include "ex13.44.h"

void foo(String x)
{
    std::cout << x.c_str() << std::endl;
}

void bar(const String& x)
{
    std::cout << x.c_str() << std::endl;
}

String baz()
{
    String ret("world");
    return ret;
}

int main()
{
    char text[] = "world";

    String s0;
    String s1("hello");
    std::cout << "s1" << std::endl;
    String s2(s0);
    std::cout << "s2" << std::endl;
    String s3 = s1;
    std::cout << "s3" << std::endl;
    String s4(text);
    std::cout << "s4" << std::endl;
    s2=s1;
    std::cout << "s2=s1" << std::endl;

    foo(s1);
    bar(s1);
    foo("temporary");
    bar("temporary");
    String s5 = baz();

    std::vector<String> svec;
    svec.reserve(8);
    svec.push_back(s0);
    svec.push_back(s1);
    svec.push_back(s2);
    svec.push_back(s3);
    svec.push_back(s4);
    svec.push_back(s5);
    svec.push_back(baz());
    svec.push_back("good job");

    for (const auto& s : svec)
    {
        std::cout << s.c_str() << std::endl;
    }
}
