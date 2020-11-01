#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string s = "file_name.txt";
    std::string_view sv = s;

    bool b1 = s.starts_with("hello");   // false
    bool b2 = s.ends_with(".txt");      // true

    bool b3 = sv.starts_with("hello");  // false
    bool b4 = sv.ends_with(".txt");     // true

    std::cout << std::boolalpha;
    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl;
    std::cout << b4 << std::endl;
}