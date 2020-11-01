#include <iostream>

int main()
{
//    int a = 10, b = 20;
    double a = 10, b = 20;

    bool ret1 = a < b;

    auto ret2 = a <=> b;

    if      ( ret2 > 0)  std::cout << "a > b" << std::endl;
    else if ( ret2 < 0)  std::cout << "a < b" << std::endl;
    else if ( ret2 ==0)  std::cout << "a == b" << std::endl; 

    std::cout << typeid(ret2).name() << std::endl;  
}