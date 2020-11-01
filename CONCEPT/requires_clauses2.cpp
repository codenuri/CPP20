#include <type_traits>

template<typename T> requires (sizeof(T) > 1)
void f1(T a)
{    
}

template<typename T> 
void f2(T a) requires (sizeof(T) > 1)
{    
}

int main()
{
    f1(0);
    f2(0);
}
