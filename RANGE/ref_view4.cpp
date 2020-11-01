#include <iostream>
#include <vector>
#include <ranges>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

    std::ranges::ref_view< std::vector<int> > rv1(v);
    std::ranges::ref_view rv2(v);

    auto rv3 = std::views::all(v);


    std::cout << typeid(rv1).name() << std::endl;    
    std::cout << typeid(rv2).name() << std::endl;  
    std::cout << typeid(rv3).name() << std::endl;  
}