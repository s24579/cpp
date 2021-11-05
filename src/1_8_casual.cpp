#include <iostream>

int main()
{
    int x,y,z;
    std::cout << "Podaj x, y i z\n";
    std::cin >> x >> y >> z;
    if(x>y&&x>z)
        std::cout << x << "\n";
    else {
        if (y>x&&y>z)
            std::cout << y << "\n";
        else {
            std::cout << z << "\n";
        }
    }
    return 0;
}
/* Pobiera liczby i wypisuje największą */
