#include <iostream>
#include <numeric>

int main()
{
    std::cout << std::midpoint(1, 3) << std::endl;
    std::cout << std::midpoint(1, 10) << std::endl;
    std::cout << std::midpoint(10,2344453) << std::endl;
    std::cout << std::midpoint(1.3,3.4) << std::endl;
}