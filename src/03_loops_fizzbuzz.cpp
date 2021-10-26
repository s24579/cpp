#include <iostream>

auto main(int argc, char* argv[])-> int{
    if (argc == 1) {
        return 1;
    }
    int x=std::stoi(argv[1]);
    for (int a=1;a<=x;a++) {
        std::cout << a << " ";
        if(a%3==0){
        std::cout << "Fizz";
     }
        if(a%5==0){
        std::cout << "Buzz";
        }
        std::cout << "\n";
    }

    return 0;
}
/* Wypisuje fizz i buzz jeśli liczba jest podzielna przez 3 lub 5 */
