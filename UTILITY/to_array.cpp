#include <iostream>
#include <array>

int main()
{
	int x[10]{ 1,2,3,4,5,6,7,8,9,10 };

	auto a1 = std::to_array(x);     // std::array<int, 10>
	auto a2 = std::to_array("foo"); // std::array<char, 4>
	auto a3 = std::to_array({ 1,2,3 }); // std::array<int, 3>

	std::cout << typeid(a1).name() << std::endl;
	std::cout << typeid(a2).name() << std::endl;
	std::cout << typeid(a3).name() << std::endl;
}