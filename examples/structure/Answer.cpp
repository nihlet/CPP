#include <iostream>
struct fractional
{
    int numerator;
    int divider;
};
void print (fractional f)
{
    std::cout << f.numerator 
              << '/' 
              << f.divider 
              << std::endl;
}
fractional multiply(fractional a, fractional b)
{
    fractional result;
    result.numerator = a.numerator * b.numerator;
    result.divider = a.divider * b.divider;
    return result;
}

int main ()
{
    fractional a = {1200,11};
    fractional b = {1,2};
    print(a);
    print(b);

    fractional c = multiply(a,b);
    print(c);
    return 0;
}