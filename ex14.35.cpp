class PrintString
{
public:
    PrintString(ostream& o=cout, char c=' '):
        os(o), sep(c) {}
    void operator()(const string& s) const
    {
        os<< s << sep;
    }
private:
    ostream& os;
    char sep;
};

class GetInput
{
public:
    GetInput(istream& i=cin) : is(i) {}
    string operator()() const
    {
        string str;
        getline(is,str);
        return is? str : string();
    }
private:
    istream& is;
};
