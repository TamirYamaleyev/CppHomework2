#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction a(1, 2);
    Fraction b(3, 4);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;

    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;

    return 0;
}