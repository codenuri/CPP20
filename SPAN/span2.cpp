#include <iostream>
#include <span>

int main()
{
    int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

    std::span<int>     sp1(x);  // ok  T : int
    std::span<int, 10> sp2(x);  // ok  T : int[10]

    std::cout << sizeof(sp1) << std::endl; // 8
    std::cout << sizeof(sp2) << std::endl; // 4
    
    std::cout << sp1.extent << std::endl; // -1
    std::cout << sp2.extent << std::endl; // 10

    std::cout << sp1.size() << std::endl; // 10
    std::cout << sp1.size_bytes() << std::endl; // 40
    std::cout << sp2.size() << std::endl; // 10
    std::cout << sp2.size_bytes() << std::endl; // 40

    int* p = new int[10]{ 1,2,3,4,5,6,7,8,9,10 };
   
 //   std::span<int> sp3(p);     // error
    std::span<int> sp4(p, 10); // ok
 //   std::span<int, 10> sp5(p); // error 
}