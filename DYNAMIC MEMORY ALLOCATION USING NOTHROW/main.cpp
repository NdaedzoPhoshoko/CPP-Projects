#include <iostream>
#include <new>

using namespace std;

int arrayName [ 5];

int main()
{
    int * ptr;
    // assigning a space of five integers into the pointer, ptr.
    //using nothrow argument
    //if memory allocation is not passed with 5 integers it will assign a null pointer
    // leading space of five integers to be ignored
    ptr = new (nothrow) int [5];


    //Incomplete program
    int indeces = 500;

    for ( int num = 0; num < 5; num++)
    {
        arrayName [ num] = indeces;

        indeces += 500;
    }
    ptr = arrayName;

    cout << *( ptr + 4);

return 0;
}
