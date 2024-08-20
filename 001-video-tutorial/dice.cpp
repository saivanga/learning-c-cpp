#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int num = rand() % 6;
    int num2 = rand() % 6;
    std::cout << num << num2 << std::endl;
    return 0;
}