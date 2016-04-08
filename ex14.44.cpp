#include <iostream>
#include <string>
#include <map>
#include <functional>

int add(int i,int j)
{
    return i+j;
}

auto mod = [](int i,int j) {return i%j;}

struct wy_div
{
    int operator()(int den, int div)
    {
        return den/div;
    }
};

std::map<std::string, std::function<int(int,int)>> binops=
{   {"+",add},
    {"-",std::minus<int>()},
    {"/",wy_div()},
    {"*",[](int i,intj){return i*j;}},
    {"%",mod}
};

