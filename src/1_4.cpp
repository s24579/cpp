#include <iostream>

int main()
{
    int x,y;
    std::cout << "Podaj x i y\n";
    std::cin >> x >> y ;
    if(x>y)
        std::cout << x;
    else{
        std::cout << y;
    }
    return 0;
}
/* Pobiera liczby i wypisuje większą */