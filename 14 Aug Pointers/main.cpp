//Topic : Pointers
/*
  Create a program that stores integer entered by a user into a variable named myChar.
  Print out the address where the integer is stored.
  Then, allow the user to enter the new integer to store at the previous same address.
  Then print out the integer stored on the myChar variable/or the same address.
*/

#include <iostream>

using namespace std;

int main()
{
    int myC;
    cout << "Enter integer : ";
    cin >> myC;
    cin.ignore();
    int * ptr = &myC;

    cout << "integer is stored in address : " << ptr;

    cout << "\n\nEnter new integer to store at the address " << ptr << " : ";
    cin >> *ptr; // dereferrencing
    cin.ignore();

    cout << "new integer is : " << myC;

    /*
    Why do we referrence ?  //give the address of data
    Why do we dereferrence ?  //get the actual data located on the address
    what is a pointer ? A variable that stores the address of the data
    Can you modify a pointer?   NO . only the value it points, not the address

    */

    return 0;
}

