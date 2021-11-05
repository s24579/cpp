#include <iostream>

int main()
{
    int x,y,z;
    std::cout << "Podaj liczbe do porownania i ile liczb chcesz porownac\n";
    std::cin >> x >> z;
    for(;z>0;z--){
        std::cout << "podaj y: ";
        std::cin >> y;
        if(x>y)
        {
        std::cout << x << " > " << y << "\n"; 
        }
        else {
        if (x == y)
            std::cout << x << " = " << y << "\n";
        else {
            std::cout << x << " < " << y << "\n";
        }
    }
    }
    return 0;
}
/* Pobiera liczby i wypisuje relacje*/
