#include <iostream>
#include <ranges>

struct MyContainer1
{
	int* begin() { return 0; }
	int* end()   { return 0; }
};
struct MyContainer2
{
};
int* begin(MyContainer2& mc) { return 0; }
int* end(MyContainer2& mc)   { return 0; }

int main()
{
	MyContainer1 mc1;
	MyContainer2 mc2;

	auto p1 = std::begin(mc1); // ok. mc1.begin()
//	auto p2 = std::begin(mc2); // error

	auto p3 = std::ranges::begin(mc1);
	auto p4 = std::ranges::begin(mc2);
}

