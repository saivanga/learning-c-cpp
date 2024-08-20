#include <iostream>
int main()
{
    int sum = 50;
    int sum2 = 50;
    int val = 1;
    while (val <= 100)
    {
        sum += val;
        ++val;
        std::cout << sum << std::endl;
    }
    return 0;
}