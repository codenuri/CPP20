#include <iostream>
#include <coroutine>

template<typename T>
class Generator
{
public:
    struct Promise
    {       
    private:
        T value;
    public:
        const T& getValue() const { return value; }

		Generator get_return_object()
		{
			return Generator{ std::coroutine_handle<Promise>::from_promise(*this) };
		}
		auto yield_value(const T& n) 
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


    class Iter 
    {
    public:
        void operator++() { coro.resume();	}
        const T& operator*() const { return coro.promise().getValue();	}
        bool operator==(std::default_sentinel_t) const
        {
            return !coro || coro.done();
        }

        explicit Iter(std::coroutine_handle<promise_type> coroutine) :
            coro{ coroutine }{}
    private:
        std::coroutine_handle<promise_type> coro;
    };

    Iter begin() { if (coro) { coro.resume(); } return Iter{ coro }; }

    std::default_sentinel_t end() { return {}; }
};


Generator<int> Gen(int first, int last)
{
    for(int i = first; i <= last; i++)
        co_yield i;
}
int main()
{
    Generator<int> g = Gen(10,20);

    // Generator 안에는 begin()/end() 가 있어야 하고
    // Generator 안에 반복자가 있으면 된다.


    for( auto n : g)
        std::cout << n << std::endl;

/*
    while( 1 )
    {
        g.coro.resume();

        if ( g.coro.done() ) break;

        std::cout << g.coro.promise().getValue() << std::endl;
    }
    */
}


