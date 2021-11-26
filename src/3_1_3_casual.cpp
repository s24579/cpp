#include <iostream>
#include <array>

auto asum(int a[], int n) -> int
{
	int suma = 0;
	for (int i=0;i<n;i++) suma = suma + a[i];
	return suma;
}


		

auto main() -> int
{
	int n=10;
	int a[10]={42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	int wynik = asum(a,n);
	std::cout << "wynik =  "<< wynik <<"\n";

	return 0;
}