#include <iostream>
#include <string>

void zadanie1()
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

void zadanie2()
{
    std::string imie="Jakub";
    double waga=80.5;
    int wzrost=180;
    std::cout << "Imie: " << imie << std::endl << std::endl << "Waga: " << waga << " kg\n\n" << "Wzrost: " << wzrost << " cm" << std::endl; 
}

void zadanie3()
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


int main()
{
    std::cout << "Zadanie 1" << std::endl;
    zadanie1();
    std::cout << "Zadanie 2" << std::endl;
    zadanie2();
    std::cout << "Zadanie 3" << std::endl;
    zadanie3();

    return 0;
}