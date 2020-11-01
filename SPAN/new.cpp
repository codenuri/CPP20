#include <iostream>
#include <string>
#include <string_view>
#include <vector>


template<typename T> class MyAlloc
{
public:
    typedef T value_type;
    MyAlloc() = default;
    template<typename U> MyAlloc(const MyAlloc<U>&) {}    

    T* allocate(std::size_t sz)
    {
        std::cout << "allocate : " << sz <<  std::endl;
        return static_cast<T*>(malloc(sz));
    }
    void deallocate(void* p, std::size_t sz) { return free(p); }
};

typedef std::basic_string<char, std::char_traits<char>, MyAlloc<char>> cstring;


void foo(cstring s) {}

int main()
{
    cstring s = "0123456789012354";
    s[0] = 'a';
    foo(s);
}