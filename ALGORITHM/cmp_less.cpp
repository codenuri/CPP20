#include <iostream>
#include <utility>

int main()
{
    int sn = 0;
    unsigned int un = 0;

    std::cout << ( -1 < sn ) << std::endl; // true 1
    std::cout << ( -1 < un ) << std::endl; // 

    std::cout << std::cmp_less( -1 , un ) << std::endl; // 1
}