#include <iostream>

int main()
{
    int a, b, c;
    	std::cout << "Podaj liczbę a, b oraz c\n";
	std::cin >> a >> b >> c;
        
	if (a<b)
		if (c!=0)	
		for(int x;a<b;a++){
			x=a/c;
			if (a%c==0)
			std::cout << x << "\n";	
		}
		else {
   		std::cout << "c musi być różne od 0\n";
		}
	else {
	std::cout << "b musi być większe od a\n";	
	}
	return 0;
} 
/* Wypisuje liczby między a i b podzielne przec c */
