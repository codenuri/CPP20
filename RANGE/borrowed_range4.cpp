#include <iostream>
#include <vector>
#include <string>
#include <string_view>
#include <algorithm>

int main()
{
    // std::ranges 알고리즘에 rvalue range 를 전달하는 경우

    auto n = std::ranges::min( std::vector{5,4,3,1,2,9} ); 
    std::cout << n << std::endl; // ok. 1


    // std::ranges::dangling ==> dangling iterator
    auto p1 = std::ranges::find( std::vector{1,2,3}, 2);
//    std::cout << *p1 << std::endl; // error


	std::string s{ "Hello" };
    auto p2 = std::ranges::find( std::string_view{s}, 'e');
    std::cout << *p2 << std::endl; // ok, e
}




