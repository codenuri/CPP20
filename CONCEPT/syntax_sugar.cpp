#include <concepts>
#include <iostream>

template<typename T> requires std::integral<T>
void f1(T a) { }

template<typename T> 
void f2(T a) requires std::integral<T>
{    
}

template<std::integral T>  // ok..
void f3(T a) 
{    
}

void f4(std::integral auto a) 
{
    std::cout << typeid(a).name() << std::endl;    
}

//void f5(std::integral  a)  // error
//{
//}

void f6(auto a)  // template<typename T> void f6(T a)
{
    std::cout << typeid(a).name() << std::endl;    
}

int main()
{
    int n = 0;
    short s = 0;
    f4(n);
    f4(s);

    f6(10);
    f6(3.4);
 
}