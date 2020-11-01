#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> sp1( new int);
    std::shared_ptr<int> sp2 = std::make_shared<int>();

    std::shared_ptr<int[]> sp3(new int[10]); 
	std::shared_ptr<int[]> sp4 = std::make_shared<int[10]>(); // C++20

	auto sp5 = std::make_shared<int[]>(3);		// new int[3]
	auto sp6 = std::make_shared<int[3]>();		// new int[3]
	auto sp7 = std::make_shared<int[3]>(4);		// new int[3]{4,4,4,4}

//	sp1[0] = 10; // error
	*sp1   = 10; // ok
	sp3[0] = 10; // ok
//	*sp3   = 10; // error

}