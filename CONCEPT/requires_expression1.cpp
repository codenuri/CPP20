#include <type_traits>

template<typename T> concept Integral = std::is_integral_v<T>;
template<typename T> concept True     = true;

template<typename T>
concept Modulus = requires(T a, T b) // requires expression
{
    a % b;
};
template<typename T> requires Modulus<T> // requires clauses
T Mod(T a, T b)
{
    return a % b;
}
int main()
{
    Mod(10,3);
 //   Mod(3.4, 2.1);
}