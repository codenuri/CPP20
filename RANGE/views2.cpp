#include <iostream>
#include <ranges>
#include <vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    std::ranges::take_view tv(v, 3);
    std::ranges::transform_view trv(tv, [](int a) { return a*2;});

    auto r = v | std::views::take(3) | std::views::transform(  [](int a) { return a*2;});

    for( auto n : r )
        std::cout << n << std::endl;  // 2, 4, 6
}