#include <iostream>

int main() {
    int x,y;
    std::cout << "Type number: ";
    std::cin >> x;
    y=x;
    if(x<0){
        std::cout << "Number is negative\n";
    }
    do{
        std::cout << x << " bottles of beer on the wall, " << x << " bottles of beer.\n";
        x--;
        std::cout << "Take one down, pass it aroud, " << x << " bottles of beer on the wall...\n";
    }while(x>0);
    std::cout << "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store an but some more, " << y << " bottles of beer on the wall...\n";

    return 0;
}
/* Wypisuje tekst piosenki do 0 */
