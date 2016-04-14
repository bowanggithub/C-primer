#include <iostream>
#include <vector>
#include <list>
#include <string>

template<typename iteratorT, typename valueT>
iteratorT find(const iteratorT& first, const iteratorT& last,
        const valueT& value)
{
    auto iter = first;
    while (iter != last && *iter != value) ++iter;
    return iter;
}

int main()
{
    std::vector<int> vi{1,2,3,4,5,6,7,8,9};
    auto it=find(vi.cbegin(),vi.cend(),5);
    std::cout << *it << std::endl;

    std::list<std::string> l{"aa","bb","cc","dd","ee","ff","gg"};
    std::list<std::string>::const_iterator itL
        = find(l.cbegin(),l.cend(),"ee");
    std::cout << *itL << std::endl;

    return 0;
}
