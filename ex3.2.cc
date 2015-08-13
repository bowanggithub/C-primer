#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Enter some input.";
    string line;
    getline(cin,line);
    cout << "You entered:" << line << endl;
    return 0;
}
