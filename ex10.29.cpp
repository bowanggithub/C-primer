#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

int main()
{
    ifstream inf("readme.txt");
    istream_iterator<string> in(inf), eof;
    vector<string> vec;
    copy(in,eof,back_inserter(vec));
    copy(vec.begin(),vec.end(),ostream_iterator<string>(cout," "));

    return 0;
}
