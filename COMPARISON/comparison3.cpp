#include <compare>
class Int32
{
    int value;
public:
    explicit Int32(int v = 0) : value(v) {}    

    auto operator<=>(const Int32& other) const { return value <=> other.value;}
    bool operator== (const Int32& other) const { return value ==  other.value;}

    auto operator<=>(int other) const { return value <=> other;}
    bool operator== (int other) const { return value ==  other;}
};
int main()
{ 
    Int32 n1{10}, n2{20};

    bool b1 = n1 == n2; // n1.operator==(n2)
    bool b2 = n1 != n2; // !(n1 == n2)
    bool b3 = n1 < n2;  // (n1 <=> n2) < 0
    bool b4 = n1 > n2;  // (n1 <=> n2) > 0

    bool b5 = n1 < 10;  // (n1 <=> 10) < 0 
    bool b6 = 10 < n1;  // (10 <=> n1) < 0, =>  ( n1 <=> 10 ) > 0
}