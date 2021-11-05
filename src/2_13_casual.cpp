#include <iostream>
#include <string>
auto main(int argc, char* argv[])-> int{
    if (argc == 0) {
        return 1;
    }
    int z;
    int x=std::stoi(argv[1]);
    for(;x>0;x--){
        z=x;
        for(;z>0;z--){
        
        std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
