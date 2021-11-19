#include <iostream>
#include <string>

auto init(int a[], int n)-> void
{
    for(int i=0;i<n;i++)
    {
        a[i]=0;
    }
return;
}
auto main(int argc , char* argv[]) -> int
{
    int n=std::stoi(argv[1]);
    if(argc==0)
    {
        return 1;
    }
    else
    {   
        int a[999];
        init(a,n);
        for(int i=0;i<n;i++)
        {
            std::cout << a[i] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
/* NIE DOKONCZONE */