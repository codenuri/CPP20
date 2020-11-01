#include <iostream>
#include <vector>
#include <ranges> 

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    auto r1 = v | std::views::take(3);  

    std::ranges::take_view tv(v, 3);


    std::cout << typeid(r1).name() << std::endl;
    std::cout << typeid(tv).name() << std::endl;
}
