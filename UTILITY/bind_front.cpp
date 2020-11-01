#include <iostream>
#include <functional>
using namespace std::placeholders;

void foo(int a, int b, int c) { printf("foo:%d %d %d\n", a, b, c);}

int main()
{
    auto f1 = std::bind(&foo, 3, _2, _1);  // C++11 

    auto f2 = std::bind_front(&foo, 3);
    auto f3 = std::bind_front(&foo, 3,4);
    auto f4 = std::bind_front(&foo, 3,4,5);
    f2(1,2);
    f3(1);
    f4();
}