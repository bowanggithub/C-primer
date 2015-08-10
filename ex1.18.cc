#include <iostream>
int main()
{
    int v1,v2;
    std::cout << "Enter two numbers: ";
    std::cin >> v1 >> v2;
    int lower, upper;
    if (v1 >= v2)
    {
        lower = v2;
        upper = v1;
    }
    else
    {
        lower = v1;
        upper = v2;
    }
    for (int i=lower; i <= upper; i++)
        std::cout << i << " ";

    return 0;
}
