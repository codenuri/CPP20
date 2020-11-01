#include <iostream>
#include <vector>
#include <type_traits>

template<typename T> class List
{
public:
    List(std::size_t sz, T v) {}

    template<typename C>
    List(C&& c) {}
};
// C++17. class template type deduction guide
//template<typename C> List(C&&)->List< typename std::remove_reference_t<C>::value_type >;

template<typename C> List(C&&)->List< std::ranges::range_value_t<C>  >;

int main()
{
    List<int> s1(10,3); // C++17 이전까지는 템플릿 인자가 필요
    List      s2(10,3); // C++17 부터. ok.

    std::vector v = {1,2,3};
    List s3(v);
   // List s4(v.begin(), v.end());

  //  using V = std::vector<int>&;
  //  V::value_type n;
}