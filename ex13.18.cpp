#include <string>
#include <iostream>
using namespace std;

class Employee
{
public:
    Employee();
    Employee(const string& name);
    Employee(const Employee& ) =delete;
    Employee& operator=(const Employee& ) =delete;
    const int id() const {return id_;}
private:
    string name_;
    int id_;
    static int s_increment;
};

int Employee::s_increment = 0;

Employee::Employee()
{
    id_=s_increment++;
}

Employee::Employee(const string& name)
{
    id_=s_increment++;
    name_=name;
}

int main()
{
    Employee a, b("Bo");
    cout << a.id() << endl;
    cout << b.id() << endl;
    return 0;
}
