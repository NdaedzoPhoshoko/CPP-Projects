//Arrays

/*#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;

int main()
{             //index0 1 2 3 4
    int number[] = {1,2,3,4,4}; //initialization

    cout << "Element" << "           " << "Value " << number[1]; //this will print out value 2
    //for example indexed variable for 3 is number[2];
    return 0;
}
*/

//Pointers
/*
#include <iostream>
using namespace std;

int main()
{
    string message = "Hy, coding is fun!!12435465465YGHFHD!";

    float small = 1.002;
    float *ptr1 = &small;

    string *ptr = &message; //store adress of message to pointer
    cout << "Addresses of message and small respectively are : " << ptr << " " << ptr1<< endl; //references the address of MESSAGE

    //for printing the actual value with ptr
    cout << "Actualy message is : " << *ptr; //dereference

    return 0;
}
*/

//functions
//create a program that adds two text messages entered by the user
//and print the combined message using a function
/*
#include <iostream>
using namespace std;

//declaring the function
string myFunction(string message1, string message2)
{
    //"sa"+"m" = "sam"//concatination
    string result = message1 + " " + message2;

    return result;
}

int main()
{
    //collecting first message
    cout << "Enter the first message : ";
    string m1;
    getline( cin, m1);//message is collected from the keyboard

    //collecting second message
    cout << "Enter the second message : ";
    string m2;
    getline( cin, m2);

    string message = myFunction(m1, m2);

    cout << "message is : " << message;

    return 0;
}
*/

//....
    /*
    //structure of a function
    //a fucntion is created globally
    data_type function_name()
    {
        //body/ function definition
        //if the function has a data type like float, int, double, char or string
        //return statement
    }
    */

#include <iostream> //file that contains input( cin) and output streams(cout)
using namespace std;

//declaring the function
void myFunction(string message1, string message2)
{
    //"sa"+"m" = "sam"//concatination
    cout << "message is : " << (message1 + " " + message2);
}

int main()
{
    //collecting first message
    cout << "Enter the first message : ";
    string m1;
    getline( cin, m1);//message is collected from the keyboard

    //collecting second message
    cout << "Enter the second message : ";
    string m2;
    getline( cin, m2);

    myFunction(m1, m2);//calling the void fucntion

    return 0;
}
