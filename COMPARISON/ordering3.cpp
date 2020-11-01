#include <iostream>
#include <string>
#include <cstring>

class ci_string
{
    std::string str;
public:
    ci_string(std::string s) : str(s) {}

    std::weak_ordering operator<=>(const ci_string& s) const  { return strcmpi( str.c_str(), s.str.c_str() ) <=> 0;  }
};

int main()
{
    std::string s1("ABCD");
    std::string s2("abcd");

    ci_string s3("ABCD");
    ci_string s4("abcd");

    auto ret1 = (s1 <=> s2);
    auto ret2 = (s3 <=> s4);

    if ( ret1 == 0 ) { std::cout << "s1 == s2" << std::endl;}
    if ( ret2 == 0 ) { std::cout << "s3 == s4" << std::endl;}

    std::cout << typeid(ret1).name() << std::endl;
    std::cout << typeid(ret2).name() << std::endl;
}

