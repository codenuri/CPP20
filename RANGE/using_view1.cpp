#include <iostream>
#include <vector>
#include <ranges>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    std::ranges::reverse_view rv1(v);

//    std::ranges::reverse_view< std::vector<int> > rv2(v);
//    std::ranges::reverse_view< std::ranges::ref_view<std::vector<int>> > rv2(v);

    auto rv2 = std::views::reverse(v);


    std::cout << typeid(rv1).name() << std::endl;

    for( auto n : rv1 )
        std::cout << n << ", ";
}