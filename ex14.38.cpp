class SizeComp
{
public:
    SizeComp(size_t n) : sz(n) {}
    bool operator()(const string& s) const
    {
        return s.size() >= sz;
    }
private:
    size_t sz;
};
