#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

int main()
{
    std::vector<int> v = {1,3,5,7,9,2,4,6,8,10};

    std::sort(v.begin(), v.end());   

    std::ranges::sort(v);

    auto fv = v | std::views::filter([](int n) { return n % 2 == 0; });

    std::ranges::replace_if( fv, [](int n) { return n > 0;}, 0);
   
    for( auto n : v )
        std::cout << n << ", ";
}
