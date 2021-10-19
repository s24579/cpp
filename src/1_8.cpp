#include <iostream>

int main()
{
    int x,y,z;
    std::cout << "Podaj x, y i z\n";
    std::cin >> x >> y >> z;
    if(x>y&&x>z)
        std::cout << x;
    else {
        if (y>x&&y>z)
            std::cout << y;
        else {
            std::cout << z;
        }
    }
    return 0;
}
/* Pobiera liczby i wypisuje największą */
