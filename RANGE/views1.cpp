#include <iostream>
#include <ranges>
#include <vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    // auto r = v | std::views::take(3);

    std::ranges::take_view tv(v, 3);

    std::ranges::transform_view trv(tv, [](int a) { std::cout << "op" << std::endl; return a*2;});
    std::cout << "start iterating" << std::endl;

    auto p1 = std::ranges::begin(trv);

    v[0] =100;
    
    std::cout << *p1 << std::endl; 



}