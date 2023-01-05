#include <iostream>
#include <cmath> //for mathematical functions
using namespace std;

int main()
{
    cout << "\n\tProgram for Sphere\n";
    const double PI = 3.1419; //declaring a constant PI
    cout << "Root(PI) = " << sqrt(PI) << endl; //display the root(PI)

    double r; //radius variable
    cout << "Enter the radious of sphere : ";
    cin >> r; //collected any user radius value

    double surfaceArea = 4*PI*pow(r, 2); //calculating the surface area
    double volume = (4/3)*PI*pow(r, 3); //calculating the volume

    cout << "\nSurface area = " << surfaceArea << endl;
    cout << "Volume = " << volume << endl;


    return 0;
}