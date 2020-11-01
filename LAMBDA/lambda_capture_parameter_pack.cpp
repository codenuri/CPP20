#include <iostream>

// Capture Parameter pack by value.
template<typename ... Args> auto f1(Args&&... args)
{
	return [...args = std::forward<Args>(args)](){ (std::cout << ... << args); };
}

// Capture Parameter pack by reference.
template<typename ... Args> auto f2(Args&&... args)
{
	return[&...args = std::forward<Args>(args)](){ (std::cout << ... << args); };
}

int main()
{
	f1(1, 2, 3, 4, 5)();

	std::cout << std::endl;

	int a = 1, b = 2, c = 3;
	f2(a, b, c)();
}