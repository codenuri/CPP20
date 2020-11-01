#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

template<std::random_access_iterator T> 
void sort(T first, T last)
{
    std::cout << "random_access_iterator" << std::endl;
}
template<std::bidirectional_iterator T> 
void sort(T first, T last)
{
    std::cout << "bidirectional_iterator" << std::endl;
}
int main()
{
    std::vector<int> v = {1,3,5,7,9,2,4,6,8,10};
    std::list<int>   s = {1,3,5,7,9,2,4,6,8,10};

//    std::sort(v.begin(), v.end()); // ok
//    std::sort(s.begin(), s.end()); // error
//    s.sort(); // ok
    sort(v.begin(), v.end());
    sort(s.begin(), s.end());
}