#include <iostream>
#define e auto main() -> int

e{
    int x,y=1,z=1;
    std::cout << "podaj liczbe: ";
    std::cin >> x;
    for (;0<x;x--)
    {
        y=y*z;
        z++;
    }
    std::cout<< y << "\n";
    return 0;
}
/* Silnia */