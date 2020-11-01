#include <iostream>
#include <vector>
#include <ranges>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    std::ranges::filter_view  fv1(v, [](int n) { return n % 2 ==0; });
    std::ranges::take_view    tv1(fv1, 3);
    std::ranges::reverse_view rv1(tv1);
    
    auto fv2 = std::views::filter(v, [](int n) { return n % 2 ==0; } );
    auto tv2 = std::views::take(fv2, 3);
    auto rv2 = std::views::reverse(tv2);

    auto rv3 = v | std::views::filter( [](int n) { return n % 2 ==0; } ) 
                 | std::views::take(3)
                 | std::views::reverse;

    for(auto n : rv1) std::cout << n << ", "; // 6, 4, 2
    for(auto n : rv2) std::cout << n << ", ";
    for(auto n : rv3) std::cout << n << ", ";
}
