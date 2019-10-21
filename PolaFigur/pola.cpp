#include <iostream>
#define PI 3.14


void menuBox(); 		
void menuDecision(int);
double poleKola(double);
double poleKwadratu(double);
double poleProstokata(double,double);
double poleTrojkata(double,double);


main()
{
    int wybor;
    char zn;

    do
    {
    std::system("clear");

    menuBox(); 

    std::cin>>wybor;

    menuDecision(wybor);

    do
	{
	    std::cout<<"Czy chcesz kontynuowac program? (T/N)" << std::endl;
	    std::cin>> zn;
	}while (zn != 't' && zn != 'T' && zn != 'n' && zn != 'N');
    }while (zn == 't' || zn == 'T');    

	
return 0;
}


void menuBox ()
{
    std::cout<<"Wybierz opcje"<<std::endl;
    std::cout<<"1.Pole Kola"<<std::endl;
    std::cout<<"2.Pole Kwadratu"<<std::endl;
    std::cout<<"3.Pole Prostokata"<<std::endl;
    std::cout<<"4.Pole Trojkata"<<std::endl;
}


void menuDecision(int  wybor)
{
    switch(wybor)
    {
	int a, b;
	case 1:
	    std::cin>>a;
	    poleKola(a);
	    break;
	case 2:
	    std::cin>>a;
	    poleKwadratu(a);
            break;
	case 3:
	    std::cin>>a>>b;
	    poleProstokata(a, b);
            break;
	case 4:
	    std::cin>>a>>b;
	    poleTrojkata(a,b);
	    break;
	default:
	    std::cout<<"Na pewno nie wybrales odpowiedniej opcji z menu."<<std::endl;
    }
}


double poleKola(double a)
{
    double wynik = PI * a * a;

    std::cout<<"Pole kola wynosi: "<<wynik<<std::endl;
}

double poleKwadratu (double a)
{
    double wynik = a * a;

    std::cout<<"Pole kwadratu wynosi: "<<wynik<<std::endl;
}
double poleProstokata (double a,double b)
{
    double wynik = a * b;

    std::cout<<"Pole prostokata wynosi: "<<wynik<<std::endl;
}double poleTrojkata (double a,double b)
{
    double wynik = 0.5 * a * b;

    std::cout<<"Pole trojkata wynosi: "<<wynik<<std::endl;
}






