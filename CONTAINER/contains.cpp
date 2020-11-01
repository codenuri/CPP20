#include <set>
#include <iostream>

int main()
{
    std::set<int>      ss = {1,2,3,4,5,6,7,8,9,10};
    std::multiset<int> ms = {1,2,3,4,5,6,7,8,9,10};

    // associative 컨테이너에서 요소가 있는지 확인 하는 방법
    // until C++20
    auto ret = ss.find(3);
    if ( ret != ss.end() ) {} 

    if ( ms.count(3) )     {}

    // since C++20
    bool b1 = ss.contains(3);
    bool b2 = ms.contains(3);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
}