struct Data  { int arr[3];};
struct Point { int x, y; };

struct Rect
{
    Point leftTop;
    Point rightBottom;
};
int main()
{
    Point p1 = {.x = 1, .y = 2 }; // ok
    Point p2 = {.y = 2, .x = 1 }; // C 언어 ok. C++ : error
    Point p3 = {.x = 1, 2};       // C 언어 ok. C++ : error
    
    Rect r1 = {1,2,3,4};  // ok
    Rect r2 = {{1},{3}};  // ok
    Rect r3 = { leftTop.x = 10}; // nested. C 언어 ok.  C++ : error
    Data d1 = {1,2};      // ok
    Data d2 = {[1] = 2};  // 0, 2, 0    C 언어 ok.   C++ : error 
};