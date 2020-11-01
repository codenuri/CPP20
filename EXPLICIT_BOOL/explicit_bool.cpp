#include <type_traits>
#include <string>
using namespace std::literals;

template<typename T> class Wrapper
{
    T data;
public:
    explicit( std::is_integral_v<T> ) Wrapper(T value) : data(value) {}
};

int main()
{
    Wrapper w1("abcd"s);     // direct initialization
    Wrapper w2{"abcd"s};
    Wrapper w3 = "abcd"s;    // copy initialization 
    Wrapper w4 = {"abcd"s};  // 

    w1 = "xyz"s; // implicit conversion

    Wrapper w5{10};  // ok
    Wrapper w6 = 10; // error
}