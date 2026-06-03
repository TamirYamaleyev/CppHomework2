#include <iostream>
#include "DynamicIntArray.h"

void TakeByValue(DynamicIntArray arr)
{
    arr.Set(0, 123);
}

int main()
{
    // Creating an array
    DynamicIntArray a(5);

    a.Set(0, 7);
    a.Set(1, 82);
    a.Set(2, 2);

    std::cout << "A: " << std::endl;
    for (size_t i = 0; i < a.Size(); i++)
        std::cout << a.Get(i) << ", ";
    std::cout << std::endl << std::endl;

    // Copy constructor
    DynamicIntArray b = a;

    b.Set(1, 200);

    std::cout << "A after B was modified: " << std::endl;
    for (size_t i = 0; i < a.Size(); i++)
        std::cout << a[i] << ", ";
    std::cout << std::endl;

    std::cout << "B: ";
    for (size_t i = 0; i < b.Size(); i++)
        std::cout << b[i] << ", ";
    std::cout << std::endl << std::endl;

    // Copy assignment
    DynamicIntArray c(5);
    c = a;

    c.Set(2, 999);

    std::cout << "A after C was modified: " << std::endl;
    for (size_t i = 0; i < a.Size(); i++)
        std::cout << a[i] << ", ";
    std::cout << std::endl;

    std::cout << "C: ";
    for (size_t i = 0; i < c.Size(); i++)
        std::cout << c[i] << ", ";
    std::cout << std::endl << std::endl;

    std::cout << "Self assignment" << std::endl;
    c = c;

    std::cout << "c after self assignment: " << std::endl;
    for (size_t i = 0; i < c.Size(); i++)
        std::cout << c[i] << ", ";
    std::cout << std::endl << std::endl;

    std::cout << "Pass by value: " << std::endl;
    TakeByValue(a);

    std::cout << "a after function call: " << std::endl;
    for (size_t i = 0; i < a.Size(); i++)
        std::cout << a[i] << " ";
    std::cout << std::endl << std::endl;

    std::cout << "Pushback and resize: " << std::endl;
    DynamicIntArray d(2);
    d.Set(0, 1);
    d.Set(1, 2);

    d.PushBack(3);
    d.PushBack(4);
    d.PushBack(5); // forces resize

    for (size_t i = 0; i < d.Size(); i++)
        std::cout << d[i] << ", ";
    std::cout << std::endl;

    std::cout << "Destructors: " << std::endl;

    return 0;
}