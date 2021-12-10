#include <iostream>
#include <string>

auto zadanie1() -> void
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
}

auto zadanie2() -> void
{
    std::string imie="Jakub";
    double waga=80.5;
    int wzrost=180;
    std::cout << "Imie: " << imie << std::endl << std::endl << "Waga: " << waga << " kg\n\n" << "Wzrost: " << wzrost << " cm" << std::endl; 
}

auto zadanie3() -> void
{
    std::string imie1,imie2;
    std::cout << "podaj imie1 i po spacji imie2\n";
    std::cin >> imie1 >> imie2;
    if(imie1.length()>imie2.length())
    {
        std::cout << "Pierwsze imie jest dluzsze!\n";
    }
    else if(imie1.length()==imie2.length())
    {
        std::cout << "Dlugosc imion jest rowna.\n";
    }
    else
    {
        std::cout << "Drugie imie jest dluzsze...\n";
    }
}

auto zadanie4() -> void
{
    std::string imie1,imie2,imie3,imie4,imie5;
    int imiem=0,imiek=0;
    std::cout << "podaj 5 imion oddzielonych spacja\n";
    std::cin >> imie1 >> imie2 >> imie3 >> imie4 >> imie5;
    std::string tab[5]={imie1,imie2,imie3,imie4,imie5};
    
    for(int i=0;i<5;i++)
    {
        if(tab[i].back()=='a')
        {
            imiek++;
        }
        else
        {
            imiem++;
        }
    }
    
    std::cout << "Zenskich imion jest: " << imiek << std::endl << "Meskich imion jest: " << imiem << std::endl;

}
auto main() -> int
{
    std::cout << "Zadanie 1" << std::endl;
    zadanie1();
    std::cout << "Zadanie 2" << std::endl;
    zadanie2();
    std::cout << "Zadanie 3" << std::endl;
    zadanie3();
    std::cout << "Zadanie 4" << std::endl;
    zadanie4();
    return 0;
}