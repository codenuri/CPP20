#include <iostream>
#include <memory>

int add(int a, int b); // { return a + b;}

int main()
{
    std::cout << sizeof(int)  << std::endl;  // 4

    // sizeof(함수호출식) : 리턴 타입의 크기
    std::cout << sizeof( add(1, 2) ) << std::endl; // 4

    decltype( add(1,2) ) n;  // int n

    std::cout << sizeof( [](int a, int b) {return a + b;} ) << std::endl;  // C++17.. error. C++20 ok
                            // 1

    std::cout << sizeof( [](int a, int b) {return a + b;}(1,2) ) << std::endl; // 4

    std::unique_ptr<int, decltype( [](int* p) { delete p; }) > up( new int );
}