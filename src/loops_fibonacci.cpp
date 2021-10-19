#include <iostream>

int main() {
        int x;
        std::cout << "How many numbers of The Fibonacci Sequence: ";
        std::cin >> x;
        if(x<=0){
            std::cout << "Can't be less or equal to 0";
        }
        else{
            for(int i=0,F1=1,F2=0,z;i<x;i++){
                std::cout << F1 << " ";
                z=F1;
                F1=F1+F2;
                F2=z;
            }
        }
}
/* Wypisuje ciąg Fibonacciego  */
