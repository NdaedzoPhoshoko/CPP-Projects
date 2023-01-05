/*create a program that asks the user for 5 names
Then ask the user for the name they want to see
e.g which name do you want to see : 2
 = Sam
*/


#include <iostream>

using namespace std;

int main()
{
    cout << "Collecting five names\n\n";
    string myArray[5];

   for ( int Count = 0; Count < 5;Count++ )
    {
        cout << "Enter name : ";
        getline( cin, myArray[Count]);
    }

    cout << "which name do you want to see : ";
    int index;
    cin >> index;

    cout << "\nThe name is " << myArray[index-1];
    string *myPointer = &myArray[index-1];

    cout << "The address is : " << myPointer;




    return 0;
}
