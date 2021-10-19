#include <iostream>
#include <random>
#include <cmath>
#include <time.h>
int main(){

    int x;
    srand (time(NULL));
    int liczba=rand() % 100 + 1;

    do{

        std::cout << "Zgadnij liczbę: ";
        std::cin >> x;
        if(liczba<x)
            std::cout << "Liczba jest mniejsza\n";
            if(liczba>x){
            std::cout << "Liczba jest większa\n";
            }
    }
    while(liczba!=x);
    std::cout << "Zgadłeś/aś liczbę ";
}
/* Losuje liczbę i daje podpowiedzi do zgadnięcia */
