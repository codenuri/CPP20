#include <iostream>
#include <compare>

struct Rect
{
    int x, y, w, h;
    Rect(int x, int y, int w, int h) : x{x}, y{y}, w{w}, h{h} {}
    
    // 사각형의 크기 비교..
    //std::strong_ordering operator<=>(const Rect& r) const 
    std::weak_ordering operator<=>(const Rect& r) const 
    { 
        // return std::strong_ordering 
         return (w*h) <=> (r.w * r.h); 
    }
};

int square(int a) { return a * a;}

int main()
{
    Rect r1(1, 1, 5, 2);
    Rect r2(1, 1, 2, 5);

    auto ret = r1 <=> r2;

    if ( ret == std::strong_ordering::equal )
    {
        // r1, r2 동일하다는 가정하의 알고리즘 작성
    }


    if ( ret == 0)
    {

    }



    int n1 = 10, n2 = 10;

    if ( (n1 <=> n2) == 0 ) // equality ( 동일 )
    {
        assert( square(n1) == square(n2) );
    }
}

