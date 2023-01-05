#include <iostream>
#include <cmath> //for mathematical functions
using namespace std;

int main()
{
    cout <<"\n\tProgram for Math\n";
    int b = 5, a = 3, c = 0, x = 6, y =10; //variable declaration
    double x1, x2;
    x1 = (-b+sqrt(pow(b, 2)-4*a*c))/(2*a); //quadratic formula for calulating x1
    x2 =  (-b-sqrt(pow(b, 2)-4*a*c))/(2*a); //quadratic formula for calulating x2

    cout << "a) x1 = " << x1 << "\tx2 = " << x2 << endl;  //displaying the values of x1 and x2

    double result = pow(x, (y/5));
    cout << "b) results = " << result; //displaying the results of the second expression
    return 0;
}