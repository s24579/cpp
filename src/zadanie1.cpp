#include <iostream>

auto main() -> int
{
    for(int i=1;i<3;i++)
    {
        for(int i=2;i<21;i++)
        {
            int liczba=i;
            bool pierwsza=true;
            for(int x=2;x<liczba;x++){
                if(liczba%x==0)
                {
                    pierwsza=false;
                    break;
                } 
            }
            if(pierwsza)
            {
                std::cout << liczba << " ";
            }   
        }
        std::cout << std::endl;
    }
    return 0;
}