/*
Write a c++ program that allows the user to enter the first name, last name  and age;
Then generate the automated password,
using the first first two letters in the first name,
last letter in the last name
and first number in the age entered.
This program shall then ask the user to enter the automated password,
the user only get three attemps to enter the password.
Failure for three attempts, the program breakes

Hint : Use loops, substrings and conditional structures( if)

Example
Enter  first name : Chantel
Enter last name : Wick
Enter age :  12
Enter the password : Chk1
Correct Password
*/

#include <iostream>
#include <sstream>  //convert any format to a string
#include <cstdlib>  //contains string functions like substr and length
using namespace std;

int main()
{

    //collect data from the user
    cout << "Enter the first Name: ";
    string first_Name;
    cin >> first_Name;

    cout << "Enter the last Name: ";
    string last_Name;
    cin >> last_Name;

    cout << "Enter the age: ";
    int age;
    cin >> age;

    //convert int to string
    string age_String;
    stringstream ss;
    ss << age;
    ss >> age_String;

    //Generating the password
    string password = " "; //Ndaezo Tsumbedzo 12
    password = first_Name.substr(0,2) +
    last_Name.substr(last_Name.length()-1, last_Name.length()) + age_String.substr( 0, 1);

     //Ask the user for the password
    string password_Of_User;
    cout << endl;

        int Count = 3;
        cout <<"You are given 3 attemps." << endl;
        while ( Count > 0)
        {
           if( Count != 1)
           {
             cout << "\n\nYou have " << Count<< " Attempts left."<<endl;
           } else
            {
                cout << "\n\nYou have " << Count<< " Attempt left."<<endl;
            }

            cout << "Enter Password: ";
            cin >> password_Of_User;
            if( password_Of_User == password)
            {
                cout << "Correct Password.\tThank you.\n";
                break;
            }else
                {
                    cout << "Wrong Password";
                }
                if( Count == 1)
                {
                    cout << "\n\nNo more attemps.\nThank you\n";
                }
                Count--;
        }

return 0;
}
