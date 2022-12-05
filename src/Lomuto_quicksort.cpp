#include <iostream>
using namespace std;

int zadanie_es(int tab[],int p,int r){

int x=tab[r],i=p-1;
    for(int j=p;j<=r-1;j++){
        if(tab[j]<=x){
            i++;
            int ES=tab[i];
            tab[i]=tab[j];
            tab[j]=ES;
        }
}
    int ES=tab[i+1];
    tab[i+1]=tab[r];
    tab[r]=ES;
return (i+1);
}

int quicksort(int tab[],int p,int r){
    if (p<r){
     int q = zadanie_es(tab,p,r);
        quicksort(tab,p,q-1);
        quicksort(tab,q+1,r);
    }

}


int main(){
    int tab[]={4,2,3,7,8,1,5,};
    quicksort(tab,0,6);
    for(int i:tab){
        cout << i;
    }
    return 0;
}
