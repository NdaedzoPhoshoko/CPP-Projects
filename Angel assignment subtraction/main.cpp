//A program for finding the difference between two integers

#include <iostream>
using namespace std;

//declaring and defining a func substr
void substr(int num1, int num2) //passing two arguments
{
    //function defn..
    cout << "substraction = " << num1 - num2 << endl;
}


int main()
{
    cout << "Enter first integer : ";
    int integer1, integer2;
    cin >> integer1;

    cout << "Enter second integer : ";
    cin >> integer2;

    substr(integer1, integer2);  //calling the void function

    
    return 0;
}