#include <iostream>
#include <vector>
#include <span>

//void foo(int* arr)
void foo( std::span<int> sp )
{
    std::cout << sp.size() << std::endl;

    sp[0] = 10;
}

int main()
{
//    int x[10]{1,2,3,4,5,6,7,8,9,10};
    std::vector<int> x{1,2,3,4,5,6,7,8,9,10};

    foo(x);
}