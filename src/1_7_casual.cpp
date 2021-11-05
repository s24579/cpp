#include <iostream>

int main()
{
    int x;
    std::cout << "Podaj x\n";
    std::cin >> x;
    if(x>0)
        std::cout << "1\n";
    else {
        if (x==0)
            std::cout << "0\n";
        else {
            std::cout << "-1\n";
        }
    }
    return 0;
}
/* Pobiera liczbę i czy jest dodatnia, równa 0 lub ujemna*/
