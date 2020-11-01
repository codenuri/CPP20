#include <iostream>
#include <span>
#include <chrono>

int main()
{
    // 언어 특징 지원 여부 조사
#ifdef __cpp_concepts
	std::cout << "support concepts" << std::endl;
#endif
#ifdef __cpp_modules
	std::cout << "support modules" << std::endl;
#endif
    // 라이브러리 특징 지원 여부 조사 - 관련된 헤더 필요
#ifdef __cpp_lib_span
	std::cout << "support span lib" << std::endl;
#endif
#ifdef __cpp_lib_chrono
	std::cout << "support chrono lib" << std::endl;
    std::cout << "chrono version : " << __cpp_lib_chrono << std::endl;
#endif   
}