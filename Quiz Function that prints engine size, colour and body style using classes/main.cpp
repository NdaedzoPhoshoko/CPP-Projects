#include <iostream>

using namespace std;

class Car{
public :


   //three data members
   double engineSize;
   char bodyStyle;
   int colourCode;

   //creating a constructor
   //with default arguments, number variables of 0 and character variable of x
   Car( double engineSize = 0, int colourCode = 0, char bodyStyle = 'x')
       {
           //What the constructor will print automaticall when an object is created
           cout << "Engine size is : " << engineSize;
           cout << "\nColour code is : " << colourCode;
           cout << "\nBody style is : " << bodyStyle;
       }

};

int main()
{
    //creating an object obj1
    //this automatically calls the constructor
    Car obj1;

return 0;
}
