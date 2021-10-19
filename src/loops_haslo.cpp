#include <iostream>
#include <string>
int main()
{
    std::string password="student",haslo;
    do{
        std::cout << "password: ";
        std::cin >> haslo;
    }
    while(password!=haslo);
    std::cout << "ok!";

    return 0;
}
/* Sprawdza hasło */
