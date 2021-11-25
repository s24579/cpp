#include <iostream>
#include <random>
#include <stdio.h>

int mapa[30][30]={};
int kolumna;
int wiersz;  
    //wypisuje pola w terminalu
    auto wypisanie_mapy() -> void
    {   
        for(int i=0;i<30;i++)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl << std::endl;
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
    //wypisuje cyfry oznaczajace ile min otacza komorke
    auto dodanie_cyfr() -> void
    {   
        int kol,wier;
        //srodek mapy
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
        //gorna krawedz
        for(int g=1;g<29;g++)
        {   
            int g2=g-1;
            if(mapa[0][g]==9)
            {   
                for(int i=0;i<3;i++)
                {
                    if(mapa[1][g2]!=9)
                    {
                        mapa[1][g2]+=1;
                    }
                    g2++;
                }
                g2=g-1;
                for(int i=0;i<2;i++)
                {
                    if(mapa[0][g2]!=9)
                    {
                        mapa[0][g2]+=1;
                    }
                    g2+=2;
                }
            }
        }
        //dolna krawedz
        for(int d=1;d<29;d++)
        {   
            int d2=d-1;
            if(mapa[29][d]==9)
            {   
                for(int i=0;i<3;i++)
                {
                    if(mapa[28][d2]!=9)
                    {
                        mapa[28][d2]+=1;
                    }
                    d2++;
                }
                d2=d-1;
                for(int i=0;i<2;i++)
                {
                    if(mapa[29][d2]!=9)
                    {
                        mapa[29][d2]+=1;
                    }
                    d2+=2;
                }
            }
        }
        //lewa krawedz
        for(int l=1;l<29;l++)
        {   
            int l2=l-1;
            if(mapa[l][0]==9)
            {   
                for(int i=0;i<3;i++)
                {
                    if(mapa[l2][1]!=9)
                    {
                        mapa[l2][1]+=1;
                    }
                    l2++;
                }
                l2=l-1;
                for(int i=0;i<2;i++)
                {
                    if(mapa[l2][0]!=9)
                    {
                        mapa[l2][0]+=1;
                    }
                    l2+=2;
                }
            }
        }
        //prawa krawedz
        for(int r=1;r<29;r++)
        {   
            int r2=r-1;
            if(mapa[r][29]==9)
            {   
                for(int i=0;i<3;i++)
                {
                    if(mapa[r2][28]!=9)
                    {
                        mapa[r2][28]+=1;
                    }
                    r2++;
                }
                r2=r-1;
                for(int i=0;i<2;i++)
                {
                    if(mapa[r2][29]!=9)
                    {
                        mapa[r2][29]+=1;
                    }
                    r2+=2;
                }
            }
        }
        //4 rogi mapy
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
    //losuje pozycje bomb
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
    bomby();
    dodanie_cyfr();
    wypisanie_mapy();
    return 0;
}
