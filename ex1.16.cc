#include <iostream>
int main()
{
    std::cout << "Enter two numbers: ";
    int v1,v2;
    std::cin >> v1 >> v2;
    if (v1 > v2)
        std::cout << "The larger one is " << v1;
    else
        std::cout << "The larger one is " << v2;

    return 0;
}
