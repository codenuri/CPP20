#include <iostream>
#include <ranges>

struct SomeType
{
//	int  begin() { return 0; }
	int* begin() { return 0; }
};

int main()
{
	SomeType st;

	auto p1 = std::begin(st); // st.begin()

	auto p2 = std::ranges::begin(st);
}


