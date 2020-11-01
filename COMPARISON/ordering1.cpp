#include <iostream>
#include <compare>

int main()
{
	int    n1 = 10, n2 = 20;
	double d1 = 10, d2 = 20;

	auto ret1 = (n1 <=> n2);
	auto ret2 = (d1 <=> d2);
	auto ret3 = (n1 <=> d2);

    if ( ret1 < 0) {}  // ret1 == std::strong_ordering::less
    if ( ret1 > 0) {}  // ret1 == std::strong_ordering::greater
    if ( ret1 == 0) {} // ret1 == std::strong_ordering::equal
    
	std::cout << typeid(ret1).name() << std::endl;
	std::cout << typeid(ret2).name() << std::endl;
	std::cout << typeid(ret3).name() << std::endl;
}