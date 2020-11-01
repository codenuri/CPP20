constexpr int add1(int a, int b) { return a + b;}
consteval int add2(int a, int b) { return a + b;}

int main()
{
    int x = 1, y = 2;

    int           ret1 = add1(x, y); // 실행시간 수행
    constexpr int ret2 = add1(1, 2); // 컴파일 시간 수행

    int           ret3 = add2(x, y); // error
    constexpr int ret4 = add2(1, 2); // ok
}