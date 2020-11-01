#include <thread>
#include <future>

int foo() { return 0; }

[[nodiscard("memory leak may occur.")]] int* allocate(int size)
{
    return new int[size];
}

int main()
{
    int* p = allocate(10);

//    std::future<int> ret = 
    std::async(std::launch::async, foo);
    
}