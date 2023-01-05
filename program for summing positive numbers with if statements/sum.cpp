#include <iostream>
#include <cmath> //for mathematical functions
using namespace std;

int main()
{
    cout << "\n\tProgram for Summation\n";
    int size;
    cout << "\nHow many numbers to sum : ";
    cin >> size;  //collecting number of numbers the user wants to sum
    cin.ignore();

    int sum = 0; //variable for summation
    int integer; //variable for accepting the values

    for(int Count = 1; Count <= size; Count++) //collecting the numbers to sum
    {
        cout << "Enter integer " << Count << " : ";
        cin >> integer;
        if( integer >= 0)  //for only accepting positive integers starting from 0
        {
            sum += integer;
        }
    }

    cout << "Sum = " << sum; //displaying sum positive integers
    return 0;
}

//sum += input;  sum = sum + input;