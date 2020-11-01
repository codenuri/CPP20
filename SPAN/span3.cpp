#include <iostream>
#include <span>

void foo(std::span<int> sp)
{
    // std::span<byte>
    //auto p = std::as_bytes(sp);
    auto p = std::as_writable_bytes(sp);

    //p[3] = 0x33;
    p[3] = static_cast<std::byte>(0x33);
    
    std::cout << std::hex << sp[0] << std::endl; //0x33000001
}

int main()
{
    int x[10]{1,2,3,4,5,6,7,8,9,10};
    int* p = new int[10]{1,2,3,4,5,6,7,8,9,10};

    foo(x); // int[10]
 //   foo(p); // int*  error
    foo({p, 10});

}

