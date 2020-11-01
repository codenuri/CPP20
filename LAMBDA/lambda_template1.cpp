#include <iostream>

auto add1 = [](int  a, int  b) {return a + b;};
auto add2 = [](auto a, auto b) {return a + b;};

auto add3 = [](auto a, decltype(a) b) {return a + b;};
//              int a, int b
int main()
{
    std::cout << add1(1,   2)   << std::endl; // 3
    std::cout << add1(1.1, 2.2) << std::endl; // 3

    std::cout << add2(1,   2)   << std::endl; // 3
    std::cout << add2(1.1, 2.2) << std::endl; // 3.3
    std::cout << add2(1,   2.2) << std::endl; // 3.2

    std::cout << add3(1,   2)   << std::endl; // 3
    std::cout << add3(1.1, 2.2) << std::endl; // 3.3
    std::cout << add3(1,   2.2) << std::endl; // 3
}
