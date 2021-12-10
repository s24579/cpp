#include <iostream>
#include <string> 

auto main(int argc, char* argv[])-> int
{   
    auto is_even()-> bool
    {
        if (argc==1)
        {
            std::cout << "Podaj arg\n";
        }
        if(std::stoi(argv[1])%2==0)
        {
            return true;
        }
        return false;
    }
    is_even(argc,argv[1]);
    return 0;
}