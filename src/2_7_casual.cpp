#include <iostream>
#define e auto main() -> int

e {
    int x, y, z=0;
    std::cout << "Podaj limit i dzielnik: ";
    std::cin >> x >> y;
    for(;x>0;x--){
        if(x%y==0){
            z=z+x;
        }
    }
    std::cout << z << "\n";
    return 0;
}