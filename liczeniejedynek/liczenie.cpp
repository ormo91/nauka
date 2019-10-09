#include <iostream>

int how_many_ones (int digit)
{
	int var=digit, one=0;
	for (int i=0;i<=var; i++)
	{
		if (digit&1)
		one++;
		
		digit/=2;
	}
return one;
}

int main()
{
	int liczba;
	std::cout<<"Program do liczenia ilosci jedynek w systemie binarnym\n";
	std::cin>>liczba;
	std::cout<<"\nPodana liczba posiada nastepujaca liczbe jedynk w kodzie binarnym: "<< how_many_ones(liczba);
	return 0;
}
