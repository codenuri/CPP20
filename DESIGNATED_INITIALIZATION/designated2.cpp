#include <iostream>

struct Point3D
{
    int x;
    int y;
    int z{20};
};

int main()
{
    Point3D p(1,2,3); // C++20 
    Point3D pp(1); // 1, 0, 0

    Point3D p1;         // 쓰레기값, 쓰레기값,쓰레기값
    Point3D p2 = {1,2,3};// 1, 2, 3
    Point3D p3 = {1};    // 1, 0, 20

    Point3D p4 = {.x = 1, .y = 2, .z = 3}; // c++20 1,2,3
    Point3D p5 = {.x = 1};              // 1, 0, 20
    Point3D p6 = {.x = 1, .z = 3};      // 1, 0, 3
    Point3D p7 = {.z = 3};              // 0, 0, 3

    printf("%d, %d, %d\n", p1.x, p1.y, p1.z);
    printf("%d, %d, %d\n", p2.x, p2.y, p2.z);
    printf("%d, %d, %d\n", p3.x, p3.y, p3.z);
    printf("%d, %d, %d\n", p4.x, p4.y, p4.z);
    printf("%d, %d, %d\n", p5.x, p5.y, p5.z);
    printf("%d, %d, %d\n", p6.x, p6.y, p6.z);
    printf("%d, %d, %d\n", p7.x, p7.y, p7.z);
}