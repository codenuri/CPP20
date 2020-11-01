#include <iostream>

auto add1 = [](auto a, auto b) {return a + b;}; // C++14
auto add2 = []<typename T>(T a, T b) {return a + b;}; // C++20

auto add3 = []<typename T1, typename T2>(T1 a, T1 b, T2 c) {return a + b + c;}; // C++20

int main()
{
    std::cout << add1(1,   2)   << std::endl; // 3
    std::cout << add1(1.1, 2.2) << std::endl; // 3.3
    std::cout << add1(1,   2.2) << std::endl; // 3.2

    std::cout << add2(1,   2)   << std::endl; // 3
    std::cout << add2(1.1, 2.2) << std::endl; // 3.3
//    std::cout << add2(1,   2.2) << std::endl; // error.

//   std::cout << add2<int>(1,   2.2) << std::endl; // error.

//   add2.operator()(1, 2.2); // 람다 표현식은 결국 () 연산자 호출
   add2.operator()<int>(1, 2.2); // ok


}
