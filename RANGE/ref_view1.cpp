#include <iostream>
#include <ranges>
#include <vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    std::ranges::ref_view rv(v);

    auto p1 = rv.begin();
    auto p2 = v.begin();

    std::cout << *p1 << std::endl; // 1
    std::cout << *p2 << std::endl; // 2

    std::cout << &v           << std::endl;
    std::cout << &(rv.base()) << std::endl;

    std::vector<int>& r = v;
    r.begin();

}