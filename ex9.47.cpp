#include <iostream>
#include <string>
using namespace std;

int main()
{
    string numbers{"1234567890"};
    string alpha{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string str{"ab2c3d7R4E6"};
    cout << "numeric characters: ";
    for (auto pos=0; (pos=str.find_first_of(numbers,pos)) != string::npos;pos++)
        cout << str[pos] << " ";
    cout << "alpha characters: ";
    for (auto pos=0; (pos=str.find_first_of(alpha,pos)) != string::npos;pos++)
        cout << str[pos] << " ";
    cout << endl;
    return 0;
}

