#include <iostream>
#include <coroutine>

class Generator
{
public:
    struct Promise
    {       
    private:
        int value;
    public:
        int getValue() const { return value; }

		Generator get_return_object()
		{
			return Generator{ std::coroutine_handle<Promise>::from_promise(*this) };
		}
		auto yield_value(int n) 
        {
            value = n;
            return std::suspend_always{}; 
        }
		auto initial_suspend() { return std::suspend_always{}; }
		auto return_void()     { return std::suspend_never{}; }
		auto final_suspend()   { return std::suspend_always{}; }
		void unhandled_exception() { std::exit(1); }
    };
    using promise_type = Promise;
    std::coroutine_handle<promise_type> coro;
    Generator( std::coroutine_handle<promise_type> c ) : coro(c) {}
   
    ~Generator() { if ( coro ) coro.destroy();}
};
Generator foo()
{
    std::cout << "Run 1" << std::endl;
    //co_await std::suspend_always {};
    
    co_yield 10; // co_await pro.yield_value(10)

    std::cout << "Run 2" << std::endl;
    co_yield 20;
    std::cout << "Run 3" << std::endl;
}
int main()
{
    Generator g = foo();

    std::cout << "\tmain1" << std::endl;
    g.coro.resume();

    std::cout << g.coro.promise().getValue() << std::endl;

    std::cout << "\tmain2" << std::endl;
    g.coro.resume();
    std::cout << g.coro.promise().getValue() << std::endl;

    std::cout << "\tmain3" << std::endl;
}


