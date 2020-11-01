#include <iostream>
#include <type_traits>

struct Point1
{
    int x, y;
};
struct Point2
{
    int x, y;
    virtual void foo() {}
};
int main()
{
    int x[2]   = {1,2};
    Point1 pt1 = {1,2};
//    Point2 pt2 = {1,2}; // error

    std::cout << std::is_aggregate_v<Point1> << std::endl;
    std::cout << std::is_aggregate_v<Point2> << std::endl;
}