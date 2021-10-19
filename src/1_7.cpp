#include <iostream>

int main()
{
    int x;
    std::cout << "Podaj x\n";
    std::cin >> x;
    if(x>0)
        std::cout << "1";
    else {
        if (x==0)
            std::cout << "0";
        else {
            std::cout << "-1";
        }
    }
    return 0;
}
/* Pobiera liczbę i czy jest dodatnia, równa 0 lub ujemna*/
