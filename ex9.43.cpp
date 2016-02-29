#include <iostream>
#include <string>
using namespace std;

void replace(string &s, const string& oldVal, const string& newVal)
{
    int oldLength=oldVal.size();
    int newLength=newVal.size();
    auto iter=s.begin();
    while (iter != s.end()-oldLength)
    {
        if (string{iter,iter+oldLength} == oldVal)
        {
            auto pos=distance(s.begin(),iter);
            s.erase(iter,iter+oldLength);
            s.insert(iter,newVal.begin(),newVal.end());
            iter = next(s.begin(),pos+newLength);
        }
        else
            iter++;
    }
}

int main()
{
    string str{"abc abc abc dfghjkl"};
    cout << str << endl;
    replace(str,"abc", "wxyz");
    cout << str << endl;
    return 0;
}
