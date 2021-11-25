#include <iostream>
#include <random>
int mapa[30][30]={};
int kolumna;
int wiersz;  
int essa;
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
        mapa[0][0]=9;
        mapa[0][29]=9;
        mapa[29][0]=9;
        mapa[29][29]=9;
        mapa[1][1]=9;
        mapa[0][1]=9;
        int kol,wier;
        for(int i=1;i<29;i++)
        {
            for(int j=1;j<29;j++)
            {   
                if(mapa[i][j]==9)
                {   
                    kol=i-1;
                    wier=j-1;
                    for(int fl=0;fl<3;fl++)
                    {   
                        
                        for(int fl2=0;fl2<3;fl2++)
                        {   
                            if(mapa[kol][wier]!=9)
                            {
                                mapa[kol][wier]+=1;
                            }
                            kol++;
                        }
                        wier++;
                        kol=i-1;
                    }
                }
            }
        }
        if(mapa[0][0]==9)
        {
            if(mapa[1][0]!=9)
            {
            mapa[1][0]+=1;
            }
            if(mapa[1][1]!=9)
            {
            mapa[1][1]+=1;
            }
            if(mapa[0][1]!=9)
            {
            mapa[0][1]+=1;
            }        
        }
        if(mapa[29][29]==9)
        {
            if(mapa[29][28]!=9)
            {
            mapa[29][28]+=1;
            }
            if(mapa[28][29]!=9)
            {
            mapa[28][29]+=1;
            }
            if(mapa[28][28]!=9)
            {
            mapa[28][28]+=1;
            }
        }
        if(mapa[0][29]==9)
        {   
            if(mapa[0][28]!=9)
            {
            mapa[0][28]+=1;
            }
            if(mapa[1][28]!=9)
            {
            mapa[1][28]+=1;
            }
            if(mapa[1][29]!=9)
            {
            mapa[1][29]+=1;
            }
        }
        if(mapa[29][0]==9)
        {
            if(mapa[28][0]!=9)
            {
            mapa[28][0]+=1;
            }
            if(mapa[28][1]!=9)
            {
            mapa[28][1]+=1;
            }
            if(mapa[29][1]!=9)
            {
            mapa[29][1]+=1;
            }
        }
    }

    auto bomby() -> void
    {   
        std::random_device rd;
        std::uniform_int_distribution<int>random(0,29);
        kolumna=random(rd);
        wiersz=random(rd);
        for(int x=0;x<50;)
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