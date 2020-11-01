#include <iostream>

// EBCO => compressed pair
template<typename T, typename U> struct PAIR
{
    [[no_unique_address]] T first;
    [[no_unique_address]] U second;

    template<typename A, typename B>
    PAIR(A&& a, B&& b) 
        : first( std::forward<A>(a)), second(std::forward<B>(b)) {}
};
// C++17. class template type deduction guide
template<typename A, typename B> PAIR(A&& a, B&& b) -> PAIR<A, B>;

int main()
{
    // 메모리 주소와 삭제자를 보관.
    PAIR p( malloc(100), [](void* p){free(p); } ); 

    std::cout << sizeof(p) << std::endl;
}