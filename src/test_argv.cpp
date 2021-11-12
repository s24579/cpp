#include <iostream>
#include <string>

auto main(int argc, char* argv[])-> int{
    if (argc == 1) {
        return 1;
    }
    std::cout << argv[1] << std::endl;
return 0;
}