#include <iostream>
#include <functional>

struct Sample
{
	int value = 0;

	auto foo()
	{
		int n = 10;

        // [=] => [=, this]
		//auto f = [=](int a) { return a + n + value; };        
        //auto f = [=, this](int a) { return a + n + value; };        
    
        auto f = [=, *this](int a) { return a + n + value; };        
        
        std::cout << sizeof(f) << std::endl; // 8
		
        return f;
	}

};
std::function<int(int)> f;

void goo()
{
	Sample s;
	f = s.foo();
    std::cout << f(10) << std::endl;
}
int main() 
{
     goo(); 
     //....
     std::cout << f(10) << std::endl;
}




