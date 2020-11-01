#include <iostream>
#include <ranges>
#include <map>

int main()
{
    std::map<int, int> m = {{1,10}, {2,20}, {3,30}};
    
    //std::ranges::keys_view kv(m);

    std::ranges::keys_view kv(m);
    //auto kv = std::views::keys(m);

    std::cout << typeid(kv).name() << std::endl;

    for( auto n : kv)
        std::cout << n << std::endl;
}