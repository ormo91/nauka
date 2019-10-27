#include <iostream>
#include <string>
#define PI 3.14


void menuBox (); 		
void menuDecision (int);
double poleKola (double);
double poleKwadratu (double);
double poleProstokata (double,double);
double poleTrojkata (double,double);
bool jestDobrze (std::string);
bool jestDobrze ();

int main ()
{
    int wybor;
    char zn;

    do
    {
    std::system ("clear");

    menuBox (); 

    while (!(std::cin >> wybor))
	  {
	  std::cin.clear();
	  std::cin.ignore (1000, '\n');
	  std::system ("clear");
	  
	  menuBox ();
	  std::cout << "Na pewno nie podales wartosci z przedzialu 1-4" << std::endl;
          }
    

    menuDecision (wybor);

    do
	{
	    std::cout << "Czy chcesz kontynuowac program? (T/N)" << std::endl;
	    std::cin >> zn;
	    std::cin.ignore (2222, '\n');
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


void menuDecision (int wybor)
{
    switch (wybor)
    {
	int a, b;
	case 1:
	    do
	    {
	    std::cout << "Podaj promien: " << std:: endl;
	    std::cin>>a;
	    }
	    while (!jestDobrze("zle, podales niepoprawna dana\n" ));
	    poleKola (a);
	    break;
	case 2:
            do
            {
            std::cout << "Podaj bok kwardratu: " << std:: endl;
            std::cin >> a;
            }
            while (!jestDobrze("zle, podales niepoprawna dana\n" ));

	    poleKwadratu (a);
            break;
	case 3:
            do
            {
            std::cout << "Podaj boki prostokata: " << std:: endl;
            std::cin >> a >> b ;
            }
            while (!jestDobrze("zle, podales niepoprawna dana\n" ));
	    poleProstokata (a, b);
            break;
	case 4:
            do
            {
            std::cout << "Podaj podstawe i wysokosc trojkata: " << std:: endl;
            std::cin >> a >> b;
            }
            while (!jestDobrze ("zle, podales niepoprawna dana\n " ));
	    
	    poleTrojkata (a,b);
	    break;
	default:
	    std::cout << "Na pewno nie wybrales odpowiedniej opcji z menu." << std::endl;
    }
}


double poleKola (double a)
{
    double wynik = PI * a * a;

    std::cout << "Pole kola wynosi: " << wynik << std::endl;
}

double poleKwadratu (double a)
{
    double wynik = a * a;

    std::cout << "Pole kwadratu wynosi: " << wynik << std::endl;
}
double poleProstokata (double a, double b)
{
    double wynik = a * b;

    std::cout << "Pole prostokata wynosi: " << wynik << std::endl;
}double poleTrojkata (double a, double b)
{
    double wynik = 0.5 * a * b;

    std::cout << "Pole trojkata wynosi: " << wynik << std::endl;
}

bool jestDobrze(std::string error_msg)
{
    if (std::cin.rdstate())
	{
	std::cin.clear();
	std::cin.ignore(1000, '\n');

	std::system ("clear");
	menuBox();
	std::cout << error_msg;
	return false;
	}
    return true;
}
