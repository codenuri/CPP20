#include <iostream>
#include <ranges>

struct MyContainer1
{
	int* begin() { return 0; }
	int* end()   { return 0; }
};

int main()
{
	MyContainer1 mc1;

//	auto sz1 = std::size(mc1); // mc1.size(). error
    auto sz2 = std::ranges::size(mc1); // 1) mc1.size() 가능하면 사용
									   // 2) mc1.end() - mc1.begin()

//	auto a1 = std::size; // error. T를 결정 안되므로!
	auto a2 = std::ranges::begin;

}

