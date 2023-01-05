
//How to work with a for loop!!!!
/*
*A loop is a block of code that is executed repeatedly until a condition is met.( it iterates)

-Syntax:
for ( initialization; condition; increment/decrement )
{
   statement(s);
}

*/

//Example:

/**
#include <iostream>
using namespace std;

int main()
{
    //print the numbers from 1 to 100 using a for loop
    cout << endl<<endl;
    for(int number = 1; number <=2 ; number++)
    {
        cout << number << " ";
    }
    cout << endl<< endl;
    return 0;
}
*/

/**
#include <iostream>
using namespace std;

int main()
{
    //print the numbers from 1 to 100 using a for loop
    cout << ".........................................."<<endl<<endl;
    for(int number = 100 ; number >= 50 ; number--)
    {
        cout << number << " ";
    }
    cout << "\n.........................................."<<endl<<endl;
    return 0;
}
*/

/**
 *Write a c++ program that allows the user to enter full names of  4 students.
 * Each name and surname after another
 * NB: but use a for loop, to collect the names and store them inside an array
 *example:
  enter names in full : Musa Edgar
  Then display the names and last names of all the 4 students using another for loop.
  (5) MARKS
  */
/**
#include <iostream>
using namespace std;

int main()
{
    //START............
    //allow the user to enter the names
    string firstName, lastName;  //declaring the variables
    string names[4]; //declare the array that will occupy strings  // with indexes 0   1   2   3 


cout << endl<<endl;

    cout << endl<<endl;

    for( int Count = 1, index = 0; Count <= 4; Count++, index++ )  // 0 1 2 3
    {
        cout << "Enter the names of student " << Count << " : ";
        getline(cin, names[index] );

        
        //when Count = 1 , index = 0, names is stored in names[0] which is the first
        //when Count = 2 , index = 1,  names is stored in names[1] which is the second
        
    }

    //display the student names
    for(int display = 0; display < 4; display++ )
    {
        cout << names[display]<< endl;
    }

    return 0;
}
*/

//..........................................................................................................

/*how to work with a while looop
A loop is a block of code that is executed repeatedly until a condition is met.( it iterates)

Syntax:
while(condition) 
{
   statement(s);
}
*/

#include <iostream>
using namespace std;

int main()
{
    int number = 50;
    while(number <=100)
    {
        cout << number<< " ";
        ++number; //incrementation before line
    }
    
    return 0;
}
