//classes and objects, functions(void and return types)
#include <iostream>
using namespace std;

//create a class called square
class square //class name
{
    public:   //access specifier
          double side;
          //constructor
          square()
          {
            cout << "\nArea of SQUARE calculator\n";
          }

          double area_calculator() //function for calculating the area of a square
          {
            double results = side * side; //area of square
            return results; //simply because Area_calculator is a return type function
          }

          void area_Print() //fucntion for displaying the area of a square
          {
              double area = area_calculator(); //assign the results of s*s into the area
              cout << "\nArea of a square is " << area;
          }

};

int main()
{
    square myObj; //data_type object_Name
    cout << "\nEnter the side of a square : ";
    cin >> myObj.side; //giving the var side the actual value stored by the client

    myObj.area_Print();//display the area of a square
   return 0;   
}