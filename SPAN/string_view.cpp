#include <iostream>
#include <string>
#include <string_view>

void* operator new(std::size_t sz)
{
    printf("%d allocate\n", sz);
    return malloc(sz);
}

//void foo(std::string s) {}
//void foo(const std::string& s) {}
void foo(std::string_view s) {}

int main()
{
    std::string s1 = "012345678901234";
    std::string s2 = "0123456789012345";

    std::cout << s1.size()     << std::endl;
    std::cout << s1.capacity() << std::endl;
    std::cout << s2.size()     << std::endl;
    std::cout << s2.capacity() << std::endl;
}