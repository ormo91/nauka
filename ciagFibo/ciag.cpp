#include <iostream>


int ciag(int nr)
{
	int war, war1, war2;
	for(int i=0; i<=nr; i++)
	{
		if (i>=2)
		{
			war=war1+war2;
			war2=war1;
			war1=war;
		}
		else if(i==0)
		{
			war2=0;
			war=war2;
		}
		else if(i==1)
		{
			war1=1;
			war=war1;
		}

	}


	return war;
}

int main()
{
	int wyr;

	std::cout<<"Program do liczenia wyrazow ciagu Fibonacciego.";
	std::cout<<"\npodaj numer wyrazu ciagu do policzenia.";
	std::cin>> wyr;
	wyr=ciag(wyr);
	std::cout<<"\nwartosc podanego wyrazu ciagu wynosi: "<<wyr;
	return 0;
}

