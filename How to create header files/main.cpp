#include <iostream>
#include <myHeader.h> //include the cpp class myHeader

double square::area_calculator() //function for calculating the area of a square
          {
            double results = side * side; //area of square
            return results; //simply because Area_calculator is a return type function
          }

int main()
{
    square myObj;
    cout << "\nEnter the value of side : ";
    cin >> myObj.side;
    myObj.area_Print();
    return 0;
}