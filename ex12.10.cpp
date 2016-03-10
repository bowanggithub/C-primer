#include <iostream>
#include <memory>
using namespace std;

void process(shared_ptr<int> ptr)
{
    cout << "inside the process function:" << ptr.use_count() << "\n";
}

int main()
{
    shared_ptr<int> p(new int(42));
    process(p);
    cout << p.use_count() << endl;
    auto q=p;
    cout << p.use_count() << endl;
    cout << "content of p is: " << *p << endl;
    return 0;
}
