#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class HasPtr
{
public:
    friend void swap(HasPtr&, HasPtr&);
    friend bool operator<(const HasPtr& lhs, const HasPtr& rhs);
    HasPtr(const std::string &s = std::string()) :
        ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr& hp) :
        ps(new std::string(*hp.ps)), i(hp.i) {}
    HasPtr& operator=(const HasPtr& hp)
    {
        std::string* new_ps = new std::string(*hp.ps);
        delete ps;
        ps = new_ps;
        i=hp.i;
        return *this;
    }
    ~HasPtr() {delete ps;}
    void show() {std::cout << *ps << std::endl;}
private:
    std::string* ps;
    int i;
};

void swap(HasPtr& lhs, HasPtr& rhs)
{
    using std::swap;
    swap(lhs.ps,rhs.ps);
    swap(lhs.i,rhs.i);
    std::cout << "call swap" << std::endl;
}

bool operator<(const HasPtr& lhs, const HasPtr& rhs)
{
    return *lhs.ps < *rhs.ps;
}

int main()
{
    vector<HasPtr> hv;
    hv.push_back(HasPtr("asd"));
    hv.push_back(HasPtr("zxc"));
    hv.push_back(HasPtr("gxc"));
    hv.push_back(HasPtr("hxc"));
    hv.push_back(HasPtr("yxc"));

    sort(hv.begin(),hv.end());
    return 0;
}


