#include <iostream>

int main()
{
    int v1 = 10;

    auto f1 = [v1](int a, int b) {return a + b;};

                            // C++11 ~ C++17     C++ 20
    decltype(f1) f2;        // Error               Error
    decltype(f1) f3 = f1;   // OK                  OK
    f3 = f1;                // Error               Error

/*
    auto f1 = [](int a, int b) {return a + b;};

                            // C++11 ~ C++17     C++ 20
    decltype(f1) f2;        // Error               OK
    decltype(f1) f3 = f1;   // OK                  OK
    f3 = f1;                // Error               OK
*/
   
}