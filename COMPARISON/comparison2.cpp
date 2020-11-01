#include <compare>

class Int32
{
    int value;
public:
    explicit Int32(int v = 0) : value(v) {}

//    friend bool operator<(const Int32& obj1, const Int32& obj2) { return obj1.value < obj2.value; }
//    friend bool operator<(const Int32& obj,  int n)             { return obj.value < n; }
//    friend bool operator<(int n,             const Int32& obj)  { return n < obj.value; }

    auto operator<=>(const Int32& other) const { return value <=> other.value;}
    bool operator== (const Int32& other) const { return value ==  other.value;}

    auto operator<=>(int other) const { return value <=> other;}
    bool operator== (int other) const { return value ==  other;}
};
int main()
{ 
    Int32 n1{10};
    Int32 n2{20};

    bool b1 = n1 < n2;  // operator<( Int32, Int32 )  또는 n1.operator<(Int32)
    bool b2 = n1 < 20;  // operator<( Int32, int)     또는 n1.operator<(int)
    bool b3 = 10 < n1;  // operator<( int, Int32) 만 가능. 멤버 함수로는 만들수 없다.

    bool b4 = 10 == n1;
}