#include <iostream>
#include <random>


auto main() ->int {
    int mapa[30][30]={};
    std::random_device rd;
    std::uniform_int_distribution<int>random(0,29);
    int kolumna=random(rd);
    int wiersz=random(rd);
    int kolx=kolumna,wierx=wiersz;

    for(int x=0;x<15;x++)
    {   
        kolx=kolumna,wierx=wiersz;
        mapa[kolumna][wiersz]=9;
        do{
            kolx=kolumna;
            kolumna=random(rd);
        }
        while(kolx==kolumna);

        do{
            wierx=wiersz;
            wiersz=random(rd);
        }
        while(wierx==wiersz);
    }
    
    for(int i=0;i<30;i++)
    {
        for(int j=0;j<30;j++)
        {
            if(mapa[i][j]==9)
            {
                mapa[i][j-1]+=1;
                mapa[i-1][j-1]+=1;
                mapa[i-1][j]+=1;
                mapa[i-1][j+1]+=1;
                mapa[i][j+1]+=1;
                mapa[i+1][j+1]+=1;
                mapa[i+1][j]+=1;
                mapa[i+1][j-1]+=1;
            }
        }
        
    }

    for(int i=0;i<30;i++)
    {
        for(int j=0;j<30;j++)
        {
            std::cout << mapa[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}