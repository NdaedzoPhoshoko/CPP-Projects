//program for printing numbers from -5 to -1
#include <iostream>

using namespace std;

int main()
{
    /*
    //printing numbers from -5 to -1
    int number = -5;  //start wit number -5
    for( int Count = 0; Count < 5; Count++)
     {
        cout << number << ", ";
        number++; //add with 1
    }
    */
    //printing numbers from -5 to -1
    for( int Count = -5; Count <= -1; Count++)
     {
        //1   2  3  4  5
        //-5  -4 -3 -2 -1
        cout << Count << ", ";
    }
    return 0;
}
