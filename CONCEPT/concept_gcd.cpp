#include <iostream>
#include <type_traits>

template<typename T> requires std::is_integral_v<T>
T gcd( T a, T b )
{
//    static_assert( std::is_integral_v<T> );
    return 0;
}
double gcd(double a, double b)
{
    std::cout << "double" << std::endl;
    return 0;
}
int main()
{
    gcd(18, 24);
    gcd(3.4, 3.2);
    gcd(1.2f, 2.3f); // float
}