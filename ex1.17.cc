#include <iostream>
int main()
{
    int amount=0,value;

    //read values until the end
    while (std::cin >> value)
        if (value < 0)
            ++amount;

    std::cout << "Amount of all negative values read is "
             << amount << std::endl;

    return 0;
}
