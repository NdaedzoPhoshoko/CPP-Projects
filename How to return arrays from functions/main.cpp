//lets create a program that stores three words from the user then reuturn them from a fucntion

#include <iostream>
using namespace std;

//lets declare and define a return type function "myFunction" of type string
string* myFunction()
{
    //collecting te names form the user
     static string myNames[3] = {" "}; //stroring three names from the user's choice
     /*In c++, its not possible to return a bunch of vlues at the same time
     notice, we made array myNames to be recorgnised throughout the code using the keyword static
     not making the array to be static, in this code, will give us a warning of returning the address of local array myNames
     */

    for( int index = 0, number = 1; index < 3; index++, number++)
    {
        cout << "Enter name : " << number << " : ";
        cin >> myNames[index];
    }
    return myNames; //only return the address that points to the actual names, which is the array name
}

int main()
{
    //accepting the strings from the return type function

    string* myNames_ptr = myFunction(); //use the pointer to be able to accept the names as an address from the myFunc...

    //displaying the names using a goto loop
    int Count = 0; // index = 0 1 2 for the three strings
    loop:
    {
        cout << "\nNames : "<< myNames_ptr[Count];
        Count++;
    }
    while( Count< 3)
    {
        goto loop; //go to run the loop's definition if Count < 3
        
    }

    return 0;
}