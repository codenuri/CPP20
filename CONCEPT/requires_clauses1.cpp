#include <type_traits>

constexpr bool check() { return true;} // consteval 

template<typename T> requires true     
void f1(T a) {}

//template<typename T> requires false                void f2(T a){}
//template<typename T> requires std::is_pointer_v<T> void f3(T a){}
//template<typename T> requires 1                    void f4(T a){}

//template<typename T> requires (check())            void f5(T a){}
template<typename T> requires (sizeof(T)> 4)       void f6(T a){}

int main()
{
//    f1(0);
//    f2(0);
//    f3(0);
//    f4(0);
//    f5(0);
    f6(0.3);
}
