#include <iostream>

struct Empty 
{
    void foo() {}
};

struct Data
{
    [[no_unique_address]] Empty e;
    int   n;
};

int main()
{
    std::cout << sizeof(Empty) << std::endl; // 1
    std::cout << sizeof(Data) << std::endl;  // 8
}