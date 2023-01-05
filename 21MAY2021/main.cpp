#include <iostream> //input stream and output stream

//input stream  cin
//output stream cout

using namespace std;

Variables - local variable
          - Global variable

local variable is a variable found inside its own fucntion
this variable cannot be used outside the function its declared inside

global namespace variable its declared outside the functions( not in anything)
it can be declared once and used everywhere


void myFunction( int a,int b = 5)
{
    int result = a + b ;

    cout << "The result is " <<  result;
}


int main()
{


    cout << "A program for computing the first and second integers."<< endl;
    cout << "Enter first integer : ";
    int var1;
    cin >> var1;

    cout << "Enter second integer : ";
    int var2;
    cin >> var2;

    myFunction( 10);
    myFunction( 12, 6);
    myFunction( 12, 4);



return 0;
}
