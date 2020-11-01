#include <iostream>
#include <type_traits>

// 타입에 따른 오버로딩
void foo(int n)    {}
void foo(double d) {}

// "가상함수가 있는 타입" 과 "없는 타입" 에 따른 오버로딩.

template<typename T> requires std::is_polymorphic_v<T>
void goo( const T& a )
{
    std::cout << "has virtual" << std::endl;
}

template<typename T> requires (!std::is_polymorphic_v<T>)
void goo( const T& a )
{
    std::cout << "no virtual" << std::endl;
}

int main()
{
    goo(10);        // no virtual
    goo(std::cout); // has virtual

}