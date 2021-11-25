#include <iostream>
#include <random>
int mapa[30][30]={};
int kolumna;
int wiersz;  
    auto wypisanie_mapy() -> void
    {
        for(int i=0;i<30;i++)
        {
            for(int j=0;j<30;j++)
            {
             std::cout << mapa[i][j] << " ";
            }
            std::cout << std::endl;
        }
        return;
    }

    auto dodanie_cyfr() -> void
    {   
        mapa[0][1]=9;
        mapa[0][5]=9;
        mapa[0][6]=9;
        for(int i=0;i<30;i++)
        {
            for(int j=0;j<30;j++)
            {   
                if(mapa[i][j]==9)
                {
                    if(i==0&&j==0)
                    {
                        mapa[i+1][j]+=1;
                        mapa[i+1][j+1]+=1;
                        mapa[i][j+1]+=1;
                    }
                    else if(i==0)
                    {
                        mapa[i][j-1]+=1;
                        mapa[i+1][j-1]+=1;
                        mapa[i+1][j]+=1;
                        mapa[i+1][j+1]+=1;
                        mapa[i][j+1]+=1;
                    }
                }
            }
        }
        return; 
    }

    auto bomby() -> void
    {   
        std::random_device rd;
        std::uniform_int_distribution<int>random(0,29);
        kolumna=random(rd);
        wiersz=random(rd);
        for(int x=0;x<15;)
        {   
            if(mapa[kolumna][wiersz]==0)
            {
                mapa[kolumna][wiersz]=9;
                x++;
            }
            else
            {
                kolumna=random(rd);
                wiersz=random(rd);
            }
        }
    }
    
auto main() ->int 
{
    //bomby();
    dodanie_cyfr();
    wypisanie_mapy();
    return 0;
}