#include <iostream>
using namespace std;


//creating a class calculations
class calculations
{
   private:
       //variable members that are public
       int number1, number2;

   public:
    //declaring
    int sum(int number1, int number2);

    //declaring the function difference
    int difference(int number1, int number2);

    //declaring the function devidend
    double devidend(int number1, int number2);

    ////declaring the function product
    int product(int number1, int number2);

    //creating a constructor for the class
  calculations()
  {
        cout << "\n\tCALCULATOR APPLICATION\n\n";
  }

  //declaring error fucntions
  void errorDevisionByZero();
  void errorFailToSubstract();

};

//abstract class Modulus Inheriting the base class
class Modulus: calculations
{
    public:
        int number1, number2;
    //a sum fucntion and its definition
    sum(int number1, int number2)
       {
             return ( number1+number2);
       };

    //definition of devidend
    double num1, num2;
    devidend(double number1, double number2)
       {
           return (number1/number2);
       };

    //defining the difference fucntion
    difference(int number1, int number2)
       {
            return ( number2 - number1);
       }

    //definition of the product fucntion
    product(int number1, int number2)
       {
            return ( number1 * number2);
       }
       void errorDevisionByZero()
      {
         cout << "error!!, division by zero, try again\n\t";
      }

      void errorFailToSubstract()
     {
         cout << "error!!, number2 should be greater than number1, try again\n\t";
     }

}myObj; //myObject object to perform action of class Modulus

int main()
{
    //9. First time providing the numbers

    bool truth0 = true;
while( truth0 == true)
{
    cout << "FIRST PROVIDING CALCULATIONS BY DEFUALT\n\n";
    //computing the sum of two numbers
    cout << "sum of 12+23 = " << myObj.sum(12,23) << endl;
    //computing the devision of two numbers
    cout << "devision of 2/4 = " << myObj.devidend(2,4);
    //computing the difference of two numbers
    cout << "\ndifference of 7-6 = " << myObj.difference(6,7);
    //computing the product
    cout << "\nproduct of 6*3 = " << myObj.product(6, 3)<< "\n\n\n";

    //Secondly the user must provide the numbers

    //computing sum
    cout << "++SUMMATION++\nEnter number1 : ";
    cin >> myObj.number1;
    cin.ignore();
    cout << "Enter number2 : ";
    cin >> myObj.number2;
    cin.ignore();
    cout << "sum of " << myObj.number1<< " + " << myObj.number2 << " = "
         << myObj.sum(myObj.number1, myObj.number2);

    //computing devision
    cout << "\n\n//DIVISION//\nEnter number1 : ";
    cin >> myObj.num1;
    cin.ignore();
    bool truth = true;
    while( truth == true)
    {
    cout << "Enter number2 : ";
    cin >> myObj.num2;
    if( myObj.num2 == 0)
    {
        myObj.errorDevisionByZero(); //print error
        truth = true;
    }else  { truth = false; }

    }
    cin.ignore();
    cout << "division of " << myObj.num1<< " / " << myObj.num2 << " = "
         << myObj.devidend(myObj.number1, myObj.number2);

    //computing difference
    cout << "\n\n--DIFFERENCE--\nEnter number1 : ";
    cin >> myObj.number1;
    cin.ignore();
    bool truth1 = true;
  while( truth1 == true)
  {
     cout << "Enter number2 : ";
     cin >> myObj.number2;
     if( myObj.number2 < myObj.number1)
     {
         myObj.errorFailToSubstract(); //print error
         truth1 = true;
     }else {
             truth1 = false;
           }
  }
     cin.ignore();
     cout << "sum of " << myObj.number1<< " - " << myObj.number2 << " = "
          << myObj.difference(myObj.number1, myObj.number2);

    cout << "\n\n**PRODUCT**\nEnter number1 : ";
    cin >> myObj.number1;
    cin.ignore();
    cout << "Enter number2 : ";
    cin >> myObj.number2;
    cin.ignore();
    cout << "sum of " << myObj.number1<< " * " << myObj.number2 << " = "
         << myObj.product(myObj.number1, myObj.number2);

    cout << "\n\nDo you want to try again ? \n"
         << "Enter 1 for YES\nEnter 2 for NO\n";
bool truth2 = true;
while(truth2 ==true )
{
    cout<< "\tenter answer : ";
         int answer;
    cin >> answer;
    cin.ignore();
    if( answer == 1)
    {
        //clearing the system
        truth0 = true;
        truth2 = false;
        system("cls");
    }else if ( answer == 2)
         {
             truth0 = false;
             truth2 = false;
             system("cls");
             cout << "\n\tThank you!!!\n\n\n";
         } else
            {

                cout << "error!!, enter right option,\n\t";
                truth2 = true;
            }
}
}

    return 0;
}
