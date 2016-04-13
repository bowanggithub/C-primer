#include <iostream>
class Base
{
public:
    virtual int fcn() {std::cout << "Base::fcn()\n"; return 0;}
};

class D1 : public Base
{
public:
    int fcn() override {std::cout << "D1::fcn()\n"; return 0;}
    virtual void f2() {std::cout << "D1::f2()\n";}
};

class D2 : public D1
{
public:
    int fcn(int);
    int fcn() override {std::cout << "D2::fcn()\n"; return 0;}
    void f2() override {std::cout << "D2::f2()\n";}
};

int main()
{
    Base bobj;
    D1 d1obj;
    D2 d2obj;

    Base* bp1 = &bobj;
    Base* bp2 = &d1obj;
    Base* bp3 = &d2obj;

    bp1->fcn();
    bp2->fcn();
    bp3->fcn();

    D1* d1p = &d1obj;
    D2* d2p = &d2obj;

    //bp2->f2();
    d1p->f2();
    d2p->f2();
}
