#include <iostream>
#include <vector>
#include <ranges>

int main()
{
//  auto p1 = std::begin( std::vector{1,2,3} );
    auto p1 = std::ranges::begin( std::vector{1,2,3} );

    std::cout << *p1 << std::endl; 
//  *p1 = 10; // error. const iterator
}



