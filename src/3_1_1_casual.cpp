#include <iostream>
#include <string>

auto init(int a[], int n)-> void
{
    for(;n>0;n--){
        a[n]=0;
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
        std::cout << n << std::endl;
    }
    return 0;
}
/* NIE DOKONCZONE */