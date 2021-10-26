#include <iostream>

auto main(int argc, char* argv[])-> int{
    if (argc == 1) {
        return 1;
    }
    int x=std::stoi(argv[1]);
    for(;x>0;x--){
        std::cout << x << "...\n";
    }
}
/* Odlicza od liczby */
