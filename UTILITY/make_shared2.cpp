#include <iostream>
#include <memory>

struct Point { int x, y; };

int main()
{
    Point* p1 = new Point;   // default initialization
    Point* p2 = new Point{}; // value initialization

    std::cout << p1->x << std::endl; // 쓰레기값
    std::cout << p2->x << std::endl; // 0

    // new Point,   new Point{ std::forward<ARGS>(args)... }
    std::shared_ptr<Point> sp1   = std::make_shared<Point>();
                                   
    std::cout << sp1->x << std::endl; // 0

    std::shared_ptr<Point> sp2   = std::make_shared_for_overwrite<Point>(); // new Point;
    std::shared_ptr<Point[]> sp3 = std::make_shared_for_overwrite<Point[]>(3);

}



