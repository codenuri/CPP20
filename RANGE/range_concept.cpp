#include <iostream>
#include <ranges>
#include <vector>

int main()
{
    bool b1 = std::ranges::range<int>;
    bool b2 = std::ranges::range<int[5]>;
    bool b3 = std::ranges::range<std::vector<int>>;
   
    std::cout << b1 << std::endl; // false 
    std::cout << b2 << std::endl; // true
    std::cout << b3 << std::endl; // true

    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10}; 
    auto r = v | std::views::take(3);

    bool b4 = std::ranges::range<decltype(r)>;
    std::cout << b4 << std::endl;  // true
}
