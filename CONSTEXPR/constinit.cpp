int n = 10;

constexpr int c1 = 10;      // 초기값을 컴파일 시간에 알아야 한다. 상수
// constexpr int c2 = x;    // error

constinit int g1 = 10;  // ok. 초기값을 컴파일 시간에 알아야 한다. 변수
//constinit int g2 = x;   // error


int main()
{
//    c1 = 20;  // error
    g1 = 20;  // ok
}

