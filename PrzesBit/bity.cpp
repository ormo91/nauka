#include <iostream>

int how_many_ones (int digit)
{
    int one = 0;
    while (digit != 0)
	{
	if (digit & 1)
	one++;
	digit /= 2;
	}
return one;
}

int main ()
{
    int digit;
    std::cout << "Program do liczenia ilosci jedynek w kodzie binarnym." << std::endl;
    std::cout << "Prosze podac liczbe do sprawdzenia." << std::endl;
    std::cin >> digit;
    std::cout << "Podana liczba posiada: " << how_many_ones(digit) << " jedynek w kodzie binarnym" << std::endl;


return 0;
}
