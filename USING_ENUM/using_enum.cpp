#include <string_view>

enum COLOR       { RED = 1, GREEN = 2, BLUE = 3}; // C++98 
enum class color { red = 1, green = 2, blue = 3}; // C++11. scoped enum

int main()
{
    int n1  = RED;          // ok
//    int n2  = red;          // error
//    int n3  = color::red;   // error
    color c = color::red;   // ok
}
std::string_view to_string(color clr)
{
    switch( clr )
    {
//        case color::red:   return "red";
//        case color::green: return "green";
//        case color::blue:  return "blue";

        using enum color;
        case red:   return "red";
        case green: return "green";
        case blue:  return "blue";
    }
    return "invalid_color";
}
// g++ 10.2