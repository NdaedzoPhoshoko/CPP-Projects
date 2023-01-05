/*#include <iostream>

using namespace std;

//declare the fucntion myFunction
int myFunction( int number1, int number2 )
{
    int results = number1 + number2;
    return results;
}

int main()
{

    //Topics
    //1 Return Type Functions
    //2 Switches
    //3 Arrays ( One dimensional tables/ arrays)

    int summation;
    int a;
    int b;

    cout << "Enter first value : ";
    cin >> a;
    cout << "Enter second value : ";
    cin >> b;



    summation = myFunction( a, b);
    cout << " Summation of " << a << " + " << b << " = " << summation << endl;

    return 0;
}

*/

/*
//Switches
#include <iostream>
using namespace std;

int main()
{
    int var1 = 4;
    int var2 = 2;
    int var3 = 1;
    int var4 = 3;

    int expression = var1;


    switch( expression)
    {
    case 1:
        cout << "Answer is equal to 1";
        break;
    case 2:
         cout << "Answer is equal to 2";
         break;
    case 3:
        cout << "Answer is equal to 3";
        break;
    case 4:
        cout << "Answer is equal to 4";
        break;
    case 80:
        cout << "Hooooooo ";
        break;//stopping the program with break statement

    default:
        cout << "No expression is evaluated.";
    }

   return  0;
}

*/
/*
//Arrays 1D
#include "iostream"
using namespace std;

int main()
{
    string studentNames[6] = { "Nanny", "John","Character","Six","New Student","Sjdjdj"};

    cout << " We have student called : " << studentNames[5] << " in the classroom";
return 0;
}
*/

#include <iostream>
using namespace std;

/*
Create a program that includes a return type function, and array( one dimention)
This program asks the user the number of students to store.
Then it stores the names of the students.

Then ask the user the name to see
*/

int myFunction( int var1)
{
    return var1;
 }

int main()
{
    cout << "\nHow many students do you want to store ? ";
    int numberOfStudents;
    cin >> numberOfStudents;

    int numOfStu = myFunction( numberOfStudents);
    string myArray[numOfStu];

    cin.ignore(); //take note , please use this for the sake of errors
    //it ignores the cin so you can use getline

    cout << endl;
    string names;
    for( int i = 0; i < numOfStu; i++)
    {

        cout << "Enter student names in full : ";
        getline( cin,names);
        myArray[ i] = names;
    }

    bool truth = true;
    while ( truth == true)
    {

    cout << "\nDo you want to see the names ? (Y/N) ";
    string answer;
    cin >> answer;

    if( answer == "Y")
    {
        //show the names, we'll use switch for this
        cout << "\nWhich number do you want to see ? ";
        int answerUser;
        cin >> answerUser;

        cout << "Names in full : " << myArray[answerUser -1];
        cout << "\nThank you";
        truth = false;

    } else if ( answer == "N")
    {
        cout << "Thank you.";
        truth = false;
    } else
    {
      cout << "Wrong Option. Try again";
      truth = true;
    }

    }
    return 0;
}
