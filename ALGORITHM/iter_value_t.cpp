#include <iostream>
#include <vector>
#include <list>
#include <ranges>

template<typename C> void goo(const C& cont);

template<typename T> void foo(const T& first)
{
    // 반복자가 가리키는 타입의 변수 만들기.
	// C++98 style
//    typename T::value_type n;
	typename std::iterator_traits<T>::value_type n1;

	// C++20 style
	std::iter_value_t<T> n2;

	std::cout << typeid(n1).name() << std::endl;
	std::cout << typeid(n2).name() << std::endl;
}

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	int x[5] = { 1,2,3,4,5 };

	foo(std::begin(v));
	foo(std::begin(x));

	goo(v);
	goo(x);
}
template<typename C> void goo(const C& cont)
{
    // 컨테이너가 저장하는 타입 구하기
    // C++98
    //typename C::value_type n; // C가 배열이면 error

	std::ranges::iterator_t<C> it;
	std::ranges::range_value_t<C> n1;

	std::cout << typeid(n1).name() << std::endl;
}