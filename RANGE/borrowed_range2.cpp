#include <iostream>
#include <vector>
#include <string>
#include <string_view>
#include <ranges>

int main()
{
//    auto p1 = std::ranges::begin( std::vector{1,2,3} ); // error 


    std::string s{"hello"};

    auto p2 = std::ranges::begin( std::string_view{ s } ); // ok

    std::cout << *p2 << std::endl; // 'h'

//    *p2 = 10; // string_view 반복자는 const iterator
}



