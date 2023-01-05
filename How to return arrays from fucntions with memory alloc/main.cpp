//Creating a program that reurn an array from the return type function

#include <iostream>
using namespace std;

//declaring and defining the fucntion that will return a double array
double* myFunction()//we use a pointer function for returning the arrays
{
    cout << "Enter three numbers below"<< endl;
    double* hy = new double[3];    /*Using the dynamic memory allocation creating a space of three decimals
    for dynamic memo alloc use the * for pointer
    take it as a single pointer but having an attitude of pointing to many values, like arrays and pointers
    now collecting three user numbers */
    for(int index = 0, Count = 1 ; Count <= 3; Count++, index++)
    {
        cout << "Enter number " << Count << " : ";
        cin >> hy[index];
    }

    return hy;
}


int main()
{
    //...
    double* numbers = myFunction(); //passing the array return function to the numbers memo alloc
    cout << endl; //newline
    //displaying the user numbers
    cout << "The numbers are : ";
    int Count1 = 0;
    do
    {
        cout << numbers[Count1] << ", "; //displaying the actual user values through indexing
        Count1++;
    } while (Count1<3);
    
    return 0;
}