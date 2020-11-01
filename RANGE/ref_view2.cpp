#include <iostream>
#include <ranges>
#include <vector>

int main()
{
    std::vector<int> v1 = {1,2,3,4,5};
    std::vector<int> v2 = {6,7,8,9,0};

    // C++ 참조 : 이동 불가능한 참조 - 
    //std::vector<int>& r1(v1);
    //std::vector<int>& r2(v2);
    std::ranges::ref_view r1(v1);
    std::ranges::ref_view r2(v2);

    r1 = r2; // 이 한줄의 효과는 ? 
             // 진짜 참조 사용시.. vector 자체를 복사

    std::cout << v1[0] << std::endl; // 1
    std::cout << v2[0] << std::endl; // 6
    std::cout << r1[0] << std::endl; // 6
    std::cout << r2[0] << std::endl; // 6
}