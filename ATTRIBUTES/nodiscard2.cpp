
struct MyType
{
    [[nodiscard]]  MyType(int n, bool b) {}
};

enum class [[nodiscard]] ErrorCode { OK, WARNING, CRITICAL, FATAL };

ErrorCode foo() { return ErrorCode::CRITICAL; }

int main()
{
    auto ret = foo();

    MyType t1 = MyType(1, true);
    
    MyType(1, true);
}
