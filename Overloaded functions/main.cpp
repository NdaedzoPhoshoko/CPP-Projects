#include <iostream>

using namespace std;

int myFunc ( int a, int b)   // return type function with arguments of type int
{
    return ( a * b);
}

//this fuction has same name as the previous one but different arguments type
double myFunc ( double a, double b)  //return type function with arguments of type double
{
    return ( a / b);
}

int main()
{
    char el = '\n';

    int x = 6, y = 3;
    cout << myFunc ( x, y) << el;
    double p = 12, q = 4;
    cout << myFunc ( p, q) << el;
}
