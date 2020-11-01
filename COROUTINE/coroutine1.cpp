#include <iostream>
#include <coroutine>

void foo()
{
    std::cout << "Run 1" << std::endl;

    co_await std::suspend_always {};

    //std::suspend_always sa;
    //co_await sa;

    std::cout << "Run 2" << std::endl;
}

int main()
{
    foo();
}