#include <iostream>
#include <string>
#define PI 3.14


void MenuBox (); 		
void MenuDecision (int);
void CircleArea (double);
void SquareArea (double);
void RectangleArea (double,double);
void TriangleArea (double,double);
bool IsRight (std::string);

int main ()
{
    int option;
    char ch;

    do
    {
      std::system ("clear");
      MenuBox (); 
    while(! (std::cin >> option))
    {
      std::cin.clear();
      std::cin.ignore (1000, '\n');
      std::system ("clear");  
      MenuBox ();
      std::cout << "You have cartainly not choosen a value beetwen 1-4." << std::endl;
    }

    MenuDecision (option);

    do
    {
      std::cout << "Do you wanna continue this program? (Y/N)" << std::endl;
      std::cin >> ch;
      std::cin.ignore (2222, '\n');
    }
    while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');
    }
    while (ch == 'Y' || ch  == 'y');    
    
return 0;
}

void MenuBox ()
{
    std::cout << "Select option" << std::endl;
    std::cout << "1.Circle area" << std::endl;
    std::cout << "2.Square area" << std::endl;
    std::cout << "3.Rectangle area" << std::endl;
    std::cout << "4.Triangle area" << std::endl;
}


void MenuDecision (int option)
{
    switch (option)
    {
	int a, b;
	case 1:
	  do
	  {
	    std::cout << "Enter the radius: " << std:: endl;
	    std::cin>>a;
	  }
	  while(!IsRight ("Wrong, you provided an invalid data"));
	  CircleArea (a);
	  break;
	case 2:
          do
          {
            std::cout << "Enter the side of square: " << std:: endl;
            std::cin >> a;
          }
          while(!IsRight ("Wrong, you provided an invalid data"));
	    SquareArea (a);
            break;
	case 3:
            do
            {
              std::cout << "Enter sides of rectangle: " << std:: endl;
              std::cin >> a >> b ;
            }
            while(!IsRight ("Wrong, you provided an invalid data" ));
	    RectangleArea (a, b);
            break;
	case 4:
            do
            {
              std::cout << "Enter : " << std:: endl;
              std::cin >> a >> b;
            }
            while(!IsRight ("Wrong, you provided an invalid data"));
	    TriangleArea (a,b);
	    break;
	default:
	    std::cout << "You hadn't certainly choose right option" << std::endl;
    }
}


void CircleArea (double a)
{
    double result = PI * a * a;
    std::cout << "Circle area is equal: " << result << std::endl;
}

void SquareArea (double a)
{
    double result = a * a;
    std::cout << "Square area is equal: " << result << std::endl;
}

void RectangleArea (double a, double b)
{
    double result = a * b;
    std::cout << "Rectangle area is equal: " << result << std::endl;
}

void TriangleArea (double a, double b)
{
    double result = 0.5 * a * b;
    std::cout << "Triangle area is equal: " << result << std::endl;
}

bool IsRight(std::string error_msg)
{
    if (std::cin.rdstate())
    {
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      std::system ("clear");
      MenuBox();
      std::cout << error_msg;
      return false;
    }
    return true;
}
