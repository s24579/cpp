/*
zmienne itp
*/


#include <iostream>
#include <string>


auto zapytaj(std::string prompt) -> int
{
int n;
std::cout << prompt << ": \n";
std::cin >> n;
return n;
}

auto dodaj(int a, int b) -> int
{
return a + b;
}

auto main() -> int
{
int a, b, c, suma;

a = zapytaj("podaj a ");
b = zapytaj("podaj b ");

suma = dodaj(a, b);

std::cout << "suma: " << suma << "\n";

c = 0;

c += 1;
std::cout << c << " ";
++c;
std:: cout<< c << " ";
std::cout << c++ << " ";
std::cout << c << " ";

return 0;
}


