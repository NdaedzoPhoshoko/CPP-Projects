/*
#include <iostream>
using namespace std;

class myRectangleClass
{
//class definition
    //member variables
public :
   int studentNo;
    string studentNames;

    //member functions
    int myFunct(int var);

    //constructors
    myRectangleClass()
    {
        cout << " MENU SHOWS!!!!\n" << endl;
    }

} myObject, myObject2, myObjectBanana ;

myRectangleClass :: myFunct(int var)
    {
        int results = var * 2;

        return results;
    }

int main()
{
    //Program starts here...!!
    myRectangleClass myObject1;
    int a = myObject1.myFunct(5);  //the . is caalled inkove
   return 0;

}
*/

/*
Global variable - its a varible that when declared it belongs everywhere in the code
A local Variable - is a varibale that only belongs to its fucntion, it can never be used outside the fuction
Constant Variable
Constructor - is a function that has the name of its class, its gets CALLED AUTOMATICALLY when you create an object of that class
*/



/*
Create a program that calculates the Area of a rectangle using the class
example
breath = 12.56;
length = 20.568;

*/
/*
#include <iostream> //istream - cin    ostream- cout
using namespace std;

//Declaring and defining a class called rectangle
class rectangle
{
public :
    //variable members
    double breath;
    double length;
    double Area;

};

int main()
{

    //code starts here
    rectangle myObj;    //declaring an object of reclangle
    myObj.breath = 12.56;
    myObj.length = 12.648;

    //Computing the area of the rectangle
    myObj.Area = myObj.breath * myObj.length;

    cout << "Area of rectangle = " << myObj.Area;

    return 0;
}
*/

/*
#include <iostream> //istream - cin    ostream- cout
using namespace std;

//Declaring and defining a class called rectangle
class rectangle
{
public :
    //variable members
    double breath;
    double length;
    double Area;

    int areaCalculator( double breath, double length)
    {
        return ( breath * length);
    }

};

int main()
{
    //declare an object of type rectangle
    rectangle myObj;

    myObj.breath = 12.56;
    myObj.length = 12.468;

    //computing the area
    myObj.Area = myObj.areaCalculator(myObj.breath, myObj.length );

    cout << " Area of a rectangle = " << myObj.Area;
    //code starts here

    return 0;
}
*/
#include <iostream> //istream - cin    ostream- cout
using namespace std;

//Declaring and defining a class called rectangle
class rectangle
{
public :
    //variable members
    double breath;
    double length;
    double Area;

    int areaCalculator( double breath, double length)
    {
        return ( breath * length);
    }

};

int main()
{
    //declare an object of type rectangle
    rectangle myObj;

    //Accepting user values
    cout << "Enter the length : ";
    cin >> myObj.length;
    cout << "Enter the breath : ";
    cin >> myObj.breath;

    //computing the area
    myObj.Area = myObj.areaCalculator(myObj.breath, myObj.length );

    cout << " Area of a rectangle = " << myObj.Area;
    //code starts here

    return 0;
}





