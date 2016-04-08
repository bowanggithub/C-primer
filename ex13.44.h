#include <memory>
#include <iostream>
#include <algorithm>

class String
{
public:
    String() : String("") {}
    String(const char*);
    String(const String&);
    String& operator=(const String&);
    ~String();

    const char* c_str() const {return elements;}
    size_t size() const {return end-elements;}
    size_t length() const {return end-elements-1;}
private:
    std::pair<char*, char*> alloc_n_copy(const char*, const char*);
    void range_initializer(const char*, const char*);
    void free();

    char* elements;
    char* end;
    std::allocator<char> alloc;
};
