#include <iostream>
#include <vector>
#include <ranges>
#include <string>
#include <string_view>

template<typename T> void check(T& c)
{
	std::cout << std::boolalpha;
	std::cout << std::ranges::borrowed_range<T> << std::endl;
}

template<typename T> class ListView
{
public:
	T* begin() { return 0; }
	T* end() { return 0; }
};
template<typename T> 
inline constexpr bool std::ranges::enable_borrowed_range< ListView<T> > = true;

int main()
{
	std::vector vec{ 1,2,3,4,5 };
	int arr[] = { 1,2,3,4,5 };
	std::string s{ "Hello" };
	std::string_view sv(s);
	std::ranges::take_view tv(vec, 3);

	check(vec); check(arr); check(s); check(sv); check(tv);
    // false,   false,      false,    true,      true

    ListView<int> lv;
    check(lv);
}




