#include <iostream>

template<typename T> 
void foo(T a)   { std::cout << "T"   << std::endl; } // 1

//void foo(int a) { std::cout << "int" << std::endl; } // 2

//void foo( ... ) { std::cout << "..." << std::endl; } // 3


int main()
{
    foo(10); // 2
             // 1
             // 3   
             // 

}


