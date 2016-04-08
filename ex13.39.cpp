class StrVec
{
friend bool operator==(const StrVec&, const StrVec&);
friend bool operator!=(const StrVec&, const StrVec&);
public:
    StrVec():
        elements(nullptr), first_free(nullptr), cap(nullptr) {}
    StrVec(const StrVec&);
    StrVec(std::initializer_list<std::string>);
    StrVec& operator=(const StrVec&);
    StrVec(StrVec&&) noexcept;
    StrVec& operator=(StrVec&&) noexcept;
    ~StrVec();
    void push_back(const std::string&);
    size_t size() const {return first_free-elements;}
    size_t capacity() const {return cap-elements;}
    std::string *begin() const {return elements;}
    std::string *end() const {return first_free;}
    void reserve(size_t new_cap);
    void resize(size_t count);
    void resize(size_t count, const std::string&);
private:
    Static std::allocator<std::string> alloc;
    void chk_n_alloc()
    {
        if (size() == capacity())
            reallocate();
    }
    std::pair<std::string*, std::string*> alloc_n_copy
        (const std::string*, const std::string*);
    void free();
    void reallocate();
    void alloc_n_move(size_t new_cap);
    std::string* elements;
    std::string* first_free;
    std::string* cap;
};

void StrVec::push_back(const string& s)
{
    chk_n_alloc();
    alloc.construct(first_free++,s);
}

pair<string*, string*> alloc_n_copy(const string* b, const string* e)
{
    auto data = alloc.allocate(e-b);
    return {data, uninitialized_copy(b,e,data)};
}

void StrVec::free()
{
    if (elements)
    {
        for (auto p = first_free; p != elements; /**/)
            alloc.destroy(--p);
        //for_each(elements,first_free,
        //  [this](std::string &rhs) {alloc.destroy(&rhs);});
        alloc.deallocate(elements.cap-elements);
    }
}

StrVec::StrVec(const StrVec &s)
{
    auto newdata = alloc_n_copy(s.begin(),s.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec::StrVec(StrVec&& s) noexcept :
    elements(s.elements), first_free(s.first_free), cap(s.cap)
{
    s.elements = s.first_free = s.cap = nullptr;
}

StrVec::StrVec(std::initializer_list<std::string> il)
{
    range_initialize(il.begin(),il.end());
}

StrVec::~StrVec() {free();}

StrVec& StrVec::operator=(const StrVec& rhs)
{
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    element = data.first;
    first_free = cap = data.second;
    return *this;
}

StrVec& StrVec::operator=(StrVec&& rhs) noexcept
{
    if (this != rhs)
    {
        free();
        elements = rhs.elements;
        first_free = rhs.first_free;
        cap = rhs.cap;
        rhs.elements = rhs.first_free = rhs.cap = nullptr;
    }
    return *this;
}

void StrVec::reallocate()
{
    auto newcapacity = size() ? 2*size():1;
    auto newdata = alloc.allocate(newcapacity);
    auto dest = newdata;
    auto elem = elements;
    for (size_t i=0; i != size(); ++i)
        alloc.construct(dest++,std::move(*elem++));
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + newcapacity;
}

void StrVec::alloc_n_move(size_t new_cap)
{
    auto newdata = alloc.allocate(new_cap);
    auto dest = newdata;
    auto elem = elements;
    for (size_t i=0; i != size(); ++i)
        alloc.construct(dest++, std::move(*elem++));
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + new_cap;
}

void StrVec:reserve(size_t new_cap)
{
    if (new_cap <= capacity()) return;
    alloc_n_move(new_cap);
}

void StrVec::resize(size_t count)
{
    resize(count, std::string());
}

void StrVec::resize(size_t count, const std::string& s)
{
    if (count > size())
    {
        if (count > capacity())
            reserve(count*2);
        for (size_t i =size(); i != count; ++i)
            alloc.construct(first_free++,s);
    }
    else if (count < size())
    {
        while (first_free != elements +count)
            alloc.destroy(--first_free);
    }
}

bool operator==(const StrVec& lhs, const StrVec& rhs)
{
    return (lhs.size() == rhs.size() &&
            std::equal(lhs.begin(),lhs.end(),rhs.begin()));
}

bool operator!=(const StrVec& lhs, const StrVec& rhs)
{
    return !(lhs == rhs);
}
