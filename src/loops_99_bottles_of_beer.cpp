#include <iostream>
#include <string>

auto main(int argc, char* argv[])-> int{
    if (argc == 0) {
        int x=99;
        do{
        std::cout << x << " bottles of beer on the wall, " << x << " bottles of beer.\n";
        x--;
        std::cout << "Take one down, pass it aroud, " << x << " bottles of beer on the wall...\n";
    }while(x>0);
    std::cout << "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store an but some more, 99 bottles of beer on the wall...\n";

    }
    else{
    int y=std::stoi(argv[1]);
    if(y<0){
        std::cout << "Number is negative\n";
    }
    do{
        std::cout << y << " bottles of beer on the wall, " << y << " bottles of beer.\n";
        y--;
        std::cout << "Take one down, pass it aroud, " << y << " bottles of beer on the wall...\n";
    }while(y>0);
    std::cout << "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store an but some more, 99 bottles of beer on the wall...\n";
    }
    return 0;
}
/* Wypisuje tekst piosenki do 0 */
