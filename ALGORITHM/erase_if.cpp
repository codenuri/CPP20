#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    // C++98 : "remove - erase idioms"
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };	

	auto p = std::remove_if(v1.begin(), v1.end(),
                         [](int n) { return n % 2 == 0; });
	v1.erase(p, v1.end());

	// C++20 : std::erase / std::erase_if
    std::vector<int> v2 = { 1,2,3,4,5,6,7,8,9,10 };
    
    std::erase(v2, 3);
//    std::erase(v2.begin(), v2.end(), 3); // error
	std::erase_if(v2, [](int n) { return n % 2 == 0; });

	for (auto n : v2) std::cout << n << ", ";
	std::cout << std::endl;

    std::cout << v2.size() << std::endl; // 4
    std::cout << v2.capacity() << std::endl; // 10
}