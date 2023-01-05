#include <iostream>

using namespace std;

const int FIVE = 5;

void myFunc( float myArray [])
{
    float indeces = 0.5;
    for ( int Count = 0; Count < FIVE; Count++)
    {
        myArray [ Count] = indeces;
        indeces++;
    }
}

int main()
{
    float arrayName [ FIVE];

    myFunc ( arrayName);

    cout <<"Five inputs in the contigency block are : "<< endl;
    for ( int num = 0; num < 5; num++)
    {
    cout << arrayName [ num]<< " ,";
    }

    //What the program is about
    //Void pointers are used for carrying addresses of any data with any type
    //Note Void pointers do no point objects/ actual values in array
    void* ptr = arrayName;   // Assigning float address into void pointer

    cout <<"\nAddress of array : "<< ptr<< endl;

return 0;
}
