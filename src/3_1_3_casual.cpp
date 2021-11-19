#include <iostream>
#include <string>

auto asum(int a[], int n, int liczby)-> void
{
    for(int i=0;i<n;i++)
    {
        a[i]=liczby;
    }
return;
}
auto main(int argc , char* argv[]) -> int
{
    int n=std::stoi(argv[1]);
    int liczby=std::stoi(argv[1]);
    if(argc==0)
    {
        return 1;
    }
    else
    {   
        int a[999];
        asum(a,n,liczby);
        for(int i=0,x;i<n;i++)
        {

        }
        std::cout << "\n";
    }
    return 0;
}
/* NIE SKONCZONE */