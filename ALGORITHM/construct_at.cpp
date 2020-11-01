#include <iostream>
#include <algorithm>

class Point
{
	int x, y;
public:
	Point(int x, int y)  : x(x), y(y) { std::cout << "Point()" << std::endl; }
	~Point()                          { std::cout << "~Point()" << std::endl; }
};
int main()
{
	Point* p1 = static_cast<Point*> (operator new(sizeof(Point)));

	// C++98 style
	new(p1) Point(1, 2); // Placement new
	p1->~Point();

	// C++20(C++17)
	std::construct_at(p1, 1, 2);	// C++20
	std::destroy_at(p1);			// C++17

	operator delete(p1);
}