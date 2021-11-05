#include <iostream>

int main()
{
    int x,y;
    std::cout << "Podaj x i y\n";
    std::cin >> x >> y ;
    if(x>y)
        std::cout << x << "\n";
    else{
        std::cout << y << "\n";
    }
    return 0;
}
/* Pobiera liczby i wypisuje większą */
