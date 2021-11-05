#include <iostream>

int main()
{
    int x;
    std::cout << "Podaj x\n";
    std::cin >> x;
    if(x>=0)
        std::cout << x << "\n";
    else{
        std::cout << x*-1 << "\n";
    }
    return 0;
}
/* Pobiera liczbę i podaje jej wartość absolutną */
