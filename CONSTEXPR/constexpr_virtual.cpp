class Base
{
public:
    virtual int foo(int a, int b) { return a + b;}
};
class Derived : public Base
{
public:
     constexpr virtual int foo(int a, int b) { return a + b;}
};
int main()
{
    Derived d;
    constexpr int ret1 = d.foo(1,2); // ok

    Base* p = &d;
    int ret2 = p->foo(1,2); // ok
   // constexpr int ret3 = p->foo(1,2); // error
}