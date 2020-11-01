#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>
#include <functional>
#include <string>

struct People
{
    std::string name;
    int  age;
};

int main()
{
    std::vector<People> v;

    v.emplace_back("aaa", 20);
    v.emplace_back("sss", 30);
    v.emplace_back("ccc", 10);
    v.emplace_back("xxx", 50);
    v.emplace_back("bbb", 40);

    //std::ranges::sort(v);
    //std::ranges::sort(v, [](const People& p1, const People& p2) { return p1.age < p2.age;});

    // std::ranges::sort(v, std::greater{}, &People::name);
    std::ranges::sort(v, {}, &People::name);

    for ( auto&& p : v)
        std::cout << p.name << "(" << p.age << ")" << std::endl;
}
