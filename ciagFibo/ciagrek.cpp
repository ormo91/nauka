#include <iostream>

int ciag (int n)
{
	
	if(n==0) return 0;
	
	if(n<=2) return 1;

	return ciag(n-1)+ciag(n-2);
}


int main()
{
	int nr,war; 
	std::cout<<"Program do liczenia wartosci kolejnych wyrazow ciagu fibonacciego.\n";
	std::cout<<"podaj numer wyrazu ciagu.\n ";
	std::cin>> nr;
	war=ciag(nr);
	std::cout<<"wartosc wyrazu "<<nr<<" ma wartosc: "<<war<<"\n";


	return 0;
}

