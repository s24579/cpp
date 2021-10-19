#include <iostream>

int main(){
    int x;
    std::cout << "Podaj liczbę: ";
    std::cin >> x;
    for(;x>0;x--){
        std::cout << x << "...\n";
    }
}
/* Odlicza od liczby */
