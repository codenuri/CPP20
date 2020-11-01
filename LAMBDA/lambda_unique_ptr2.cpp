#include <iostream>

template<typename T, typename D> class unique_ptr
{
    T* obj;
 //   D d;
public:
    explicit unique_ptr(T* p = 0) : obj(p) {}

    ~unique_ptr()
    {
        D d;  // 디폴트 생성자 필요. C++17 error
              // C++20. ok
        d(obj);
    }
};

int main()
{
    //unique_ptr<int, decltype([](int* p){delete p;}) > p1(new int);

    auto f = [](int* p){delete p;};

    unique_ptr<int, decltype(f) > p1(new int); // C++11도 ok..
}