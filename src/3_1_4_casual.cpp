#include <iostream>
#include <array>

auto amin(int a[], int n) -> int
{
	int min = a[0];
	for (int i=0;i<n;i++) if (a[i]<min) min = a[i];
	return min;
}

auto main() -> int
{
	int n = 10;
	int a[10] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	int min = amin(a,n);
	std::cout <<"Najmniejsza liczby wynosi: " << min << std::endl;
	return 0;
}