int foo(){ return 0;}

int main()
{
    int x[3] = {1,2,3};

    // C++11 - 새로운 반복문 ( range for)
    for( auto n : x ) {}

    // C++17 - 초기화 구문을 가진 제어문 (if, switch)
    if ( int ret  = foo(); ret == 0) {}
    switch( int n = foo(); n)       {}

    // C++20
    for( int y[3]{1,2,3}; auto n : y ) {}

   // while( int n = 0; n < 10 ) {} // error

    for( int n = 0; n < 10; n++){}                                   

}