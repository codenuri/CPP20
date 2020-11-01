#include <iostream>
#include <string>

struct People
{
    std::string name;
    int         age;
    People( std::string n, int a) : name(n), age(a) {}
   
    std::partial_ordering operator<=>(const People& p) const 
    {
        if ( age < 1 || p.age < 1 ) return std::partial_ordering::unordered;
        return age <=> p.age;
    }
};
int main()
{
    People p1("Kim", 20);
    People p2("Lee", -10);

    auto ret = (p1 <=> p2);

    if ( ret == std::partial_ordering::unordered ) 
    {
        std::cout << "can not ordered" << std::endl;
    }

    auto ret2 = ( 3.4 <=> 2.1 ); // NaN => Not A Numbder

    std::cout << typeid(ret2).name() << std::endl;

}