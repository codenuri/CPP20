#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

int main()
{
//	int c[] = {1,2,3,4,5};
	std::vector<int> c = { 1,2,3,4,5 };

	// C++98
	std::vector<int>::iterator p1 = c.begin();

	// C++11
	auto p2 = std::begin(c);

	// C++20
	auto p3 = std::ranges::begin(c);
}