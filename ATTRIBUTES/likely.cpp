int foo(int i) 
{
//    if ( __builtin_expect(i>0, 1 ) )
    if  ( i >  0) [[likely]]
        i += 2; 
    else 
        i -= 2; 

    return i; 
} 

int main() 
{ 
    foo(10);

    return 0; 
}