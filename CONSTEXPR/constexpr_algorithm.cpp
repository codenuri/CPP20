#include <iostream>
#include <algorithm>
#include <numeric>
#include <array>

int main()
{
//    constexpr int x[10] = {1,2,3,4,5,6,7,8,9,10};
    constexpr std::array<int, 10> x = {1,2,3,4,5,6,7,8,9,10};

//    constexpr std::vector<int> x = {1,2,3,4,5,6,7,8,9,10};

    constexpr int c = std::accumulate(std::begin(x), std::end(x), 0);

//    constexpr auto p = std::find(std::begin(x), std::end(x), 3);

    std::cout << c << std::endl;    
}