#include <iostream>
#include <vector>
#include <ranges>

template<typename R> class take_view 
{
	//R& rg;      
    //std::ranges::ref_view<R> rg;
    R rg;  // std::ranges::ref_view< std::vector<int> >
	int count;
public:
	template<typename A>
	take_view(A&& r, int cnt) : rg(std::forward<A>(r)), count(cnt) {}
    // ...... begin(), end() 등..
};
template<typename A>
take_view(A&&, int) -> take_view< std::ranges::ref_view<std::remove_reference_t<A> > >;

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5 };
	std::vector<int> v2 = { 6,7,8,9,0 };

	take_view tv1(v1, 3);
	take_view tv2(v2, 3);

    tv1 = tv2;
}