#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    int c;

    c = a;
    a = b;
    b = c;

    std::cout << b << std::endl;
    std::cout << a << std::endl;

    // this is a constant
    const int d = 3;

    return 0;
}