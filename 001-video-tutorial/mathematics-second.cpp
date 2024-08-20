#include <iostream>

int main()
{
    const int sales = 95000;
    const double countyTax = .02;
    const double stateTax = .04;
    std::cout << "County Tax: " << countyTax << std::endl;
    std::cout << "State Tax: " << stateTax << std::endl;
    std::cout << "Sales: $" << sales << std::endl;

    std::cout << "Total State Tax: $" << stateTax * sales << std::endl;
    std::cout << "Total county Tax: $" << countyTax * sales << std::endl;
    std::cout << "Total Tax: $" << (countyTax * sales) + (sales * stateTax) << std::endl;

    return 0;
}