//Create a simple C++ project that calculate the area of a square
//using a class  and a constructor
#include <iostream>
#include <cmath>
using namespace std;

//create a class Area
class Area
{
    public: //declare public variables
    double side;

    //declare public functions
    void AreaCalculator()
    {
        //double Area = side*side = side^2;
        double Area = pow(side, 2);
        cout << "Area of square is: " << Area <<endl; // "\n"
    }

    Area() //declare a constructor , has the names of a name
    {
        cout << "\n\tAREA CALCULATOR PROJECT\n\n";  //displaying the title
    }

};

int main()
{
    //create/declare an object of a class
    Area obj;  //auto...the constr is being called
   cout << "hy, enter side of square : ";
   cin >> obj.side; //collected the value of side
    obj.AreaCalculator();
    return 0;
}




