#include <iostream>

constexpr auto add(int x, int y)
{
	bool b = std::is_constant_evaluated();

	return std::pair(x + y, b);
}

int main()
{
    constexpr auto ret1 = add(1, 2); // second : true
    auto           ret2 = add(1, 2); // false
    const auto     ret3 = add(1, 2); // false

    int x = 1, y = 2;

	auto       ret4 = add(x, y); // false
	const auto ret5 = add(x, y); // false
//	constexpr auto ret6 = add(x, y); // error

	std::cout << ret1.second << std::endl;
	std::cout << ret2.second << std::endl;
	std::cout << ret3.second << std::endl;
	std::cout << ret4.second << std::endl;
	std::cout << ret5.second << std::endl;
}
