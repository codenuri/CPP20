#include <compare>
#include <cstring>
class String
{
    char* buff;
    int   size;
public:
    String(const char* s) 
    {
        size = strlen(s);
        buff = new char[size + 1];
        strcpy(buff, s);
    }
    ~String() { delete[] buff;}
    auto operator<=>(const String& s) const {  return strcmp(buff, s.buff) <=> 0;   }

    bool operator==(const String& s) const
    {
        return size == s.size || (*this <=> s) == 0;
    }
};
int main()
{
    String s1("ABCD");
    String s2("ABCXYZ");
    bool ret = s1 == s2;
}