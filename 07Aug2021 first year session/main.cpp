

//Problem solving
/*Write a C++ program to find the sum
 and average of one dimensional integer array
*/

/*
#include <iostream>

using namespace std;

int main()
{
    //Declare the varibales to be used for solving the problem
    double average;
    double sum = 0;
    int numberOfElements = 10;
    int myArray[numberOfElements] = { 34, -1, 0, 7, 1000, 56, 7, 6, 7, 9};

    //Computing the sum using a loop
    for( int Count = 0; Count < numberOfElements; Count++)
    {
        sum = sum + myArray[Count];
    }

    cout << "Sum = " << sum;
    average = sum/numberOfElements;
    cout << " and Average = " << average;
    return 0;
}

*/

/*
 Write a C++ program to swap first and last element of an integer 1-d array
 */

 /*
#include <iostream>
using namespace std;

int main()
{
    int myArray[5] = { 34 , 0, -4, 5, 5};

    //Swapping stage
    int stack_tempValue;
    stack_tempValue = myArray[0];
    myArray[0] = myArray[4];
    myArray[4] = stack_tempValue;

    //Displaying the array
    cout << " The array elements are : [ ";
    for ( int index = 0; index < 5; index++)
    {
        cout << myArray[index] << ", ";  // 0 1 2 3 4
    }

    cout << "]";

    return 0;
}
*/

/*
//3 Write a C++ program to reverse the elements of an integer 1-D array

#include <iostream>
using namespace std;

int main()
{
    //...                0   1  2  3 4   5    6     7   8   9
    int myArray[ 10] = { 12, 5, 7, 8, 23, -7, -100, 6, 24, 7};

    cout << "Reversed values are [ ";
    for ( int Count = 9; Count >= 0; Count--)
    {
        cout << myArray[Count] << ", " ;
    }
    cout << "]";

    return 0;
}

*/


/*Write a C++ program to find the largest and smallest element of an array.*/

#include <iostream>
using namespace std;

int main()
{                 //indexes 0    1    2    3  4    5    6    7     8
    double myArray[10] = { 34.0, -336, -0.7, 89, 7.0, 6.5, 5.5, -100, 100, -100.6};
    double tempSmallestValue, tempLargestValue;

    //always store the first number in the stack
    tempLargestValue = myArray[0];
    tempSmallestValue = myArray[0];
    for( int Count = 0; Count < 10; Count++)
    {
        //Finding the largest value
       if( tempLargestValue < myArray[Count] )
       {
           tempLargestValue = myArray[Count];
       }

       //Finding the smallest value
       if( tempSmallestValue > myArray[Count])
       {
           tempSmallestValue = myArray[Count];
       }

    }
    cout << "The largest value is : " << tempLargestValue << endl;
    cout << "The smallest value is : " << tempSmallestValue << endl;

    return 0;
}













