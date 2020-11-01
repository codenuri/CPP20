#include <iostream>

template<typename T> 
concept Concept1 = sizeof(T) > 1;

template<typename T>   
concept Concept2 = sizeof(T) < 8;

template<typename T>   
concept Concept3 = Concept1<T> && Concept2<T>;

template<typename T> requires Concept1<T> 
void foo(T a) { std::cout << "1" << std::endl; }

template<typename T> requires Concept3<T>
void foo(T a) { std::cout << "2" << std::endl;}

int main()
{
    foo(3);
}


