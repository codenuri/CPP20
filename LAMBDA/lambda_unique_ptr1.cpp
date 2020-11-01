#include <iostream>
#include <memory>

struct Freer
{
    inline void operator()(void* p) const noexcept
    {
        std::cout << "free" << std::endl;
        free(p);
    }
};

int main()
{
    std::unique_ptr<int> up1( new int ); // delete
 
    //std::unique_ptr<int, Freer> up2( static_cast<int*>( malloc(100) ) );

    //std::unique_ptr<int, [](int* p) {free(p);} > up2( static_cast<int*>( malloc(100) ) );

    std::unique_ptr<int, decltype([](int* p) {free(p);}) > up2( static_cast<int*>( malloc(100) ) );

}