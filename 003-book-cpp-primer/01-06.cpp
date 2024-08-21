/*
Original Code:
std::cout << "The sum of " << v1;
<< " and " << v2;
<< " is " << v1 + v2 << std::endl;

Does not work because it has semicolons on each line which means the statement is done so << does not point to anything

*/

#include <iostream>

int main()
{
    int v1, v2;

    std::cout << "The sum of " << v1
    << " and " << v2
    << " is " << v1 + v2 << std::endl;
    return 0;
}