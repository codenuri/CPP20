#include <iostream>
#include <list>
#include <algorithm>
#include <type_traits>

template<typename T> requires  std::is_pointer_v<T>
void printv(T addr)
{
    std::cout << addr << " : " << *addr << std::endl;
}

int main()
{
    int n = 10;
 //   printv(&n);
 //   printv(n);

 //   std::list s = {1,2,3};
 //   std::sort(s.begin(), s.end());
}