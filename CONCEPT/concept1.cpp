#include <iostream>
#include <type_traits>

template<typename T>
concept Integral = std::is_integral_v<T>;

//template<typename T> requires std::is_integral_v<T>
template<typename T> requires Integral<T>
void foo(T a)
{
}

int main()
{
    bool b = Integral<float>;

    std::cout << b << std::endl;
}