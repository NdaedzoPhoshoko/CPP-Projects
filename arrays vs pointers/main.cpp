#include <iostream>

using namespace std;

int main()
{

    int arrayName[ ] = { 1, 5, 7, 203};
    cout << arrayName<< endl; // prints the address of arrayName

    int *arrayNamePtr;
    arrayNamePtr = arrayName;
    cout <<arrayNamePtr<< endl; //prints the address of the arrayName

    cout<< *arrayNamePtr<< endl; //prints the first value ( 1) in the arrayName

    cout<< arrayName[ 1]<< endl; //prints the second position ( 5)

    cout<< arrayNamePtr[ 2]<< endl; //prints the value on the third position ( 7)

return 0;
}
