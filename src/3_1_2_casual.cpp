#include <iostream>
#include <string>

auto iota(int a[], int n, int start)-> void
{
    for(int i=0;i<n;i++)
    {
        a[i]=start;
        start++;
    }
return;
}
auto main(int argc , char* argv[]) -> int
{
    int n=std::stoi(argv[1]);
    int start=std::stoi(argv[2]);
    if(argc==0)
    {
        return 1;
    }
    else
    {   
       int a[999];
        iota(a,n,start);
        for(int i=0;i<n;i++)
        {
            std::cout << a[i] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
/* Wypisuje tablice */