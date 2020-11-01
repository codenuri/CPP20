#include <iostream>

template<typename T> 
concept Concept1 = sizeof(T) > 1;

template<typename T>   
concept Concept2 = Concept1<T> && sizeof(T) < 8;

template<typename T> requires Concept1<T> 
void foo(T a) { std::cout << "1" << std::endl; }

template<typename T> requires Concept2<T>
void foo(T a) { std::cout << "2" << std::endl;}

int main()
{
    foo(3);
}


