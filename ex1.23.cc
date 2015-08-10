#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item currBook, book;
    if (std::cin >> currBook)
    {
        book=currBook;
        int cnt=1;
        while (std::cin >> book)
        {
            if (book.isbn() == currBook.isbn())
                ++cnt;
            else
            {
                std::cout << currBook << " occurs "
                          << cnt << " times" << std::endl;
                currBook=book;
                cnt=1;
            }
        }

        std::cout << currBook << " occurs "
                  << cnt << " times" << std::endl;
    }
    return 0;
}
