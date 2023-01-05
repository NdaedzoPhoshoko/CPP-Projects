/*A program to display year, month and days of the month*/
#include <iostream>
#include <sstream>
#include <cstring>
#include <iomanip>

using namespace std;


char el = '\n';
void printMonth( int month);    //declaring printMonth with one argument



int main()
{
    cout <<"A program to display the choice of the calender" << el;
    cout <<"Please Enter the year of which you want the calender : ";
    int year;
    string mystr;
    cin >> mystr;
    stringstream (mystr) >> year;    // extract year e.g >> 2012

    cout <<"Enter the month in numbers from 1 to 12 : ";
    int month;
    cin >> mystr;
    stringstream (mystr) >> month;    // object mystr extract to month

    //building the head of the calender
    cout <<"\t";
    printMonth( month);
    cout <<" " << year << el;
    cout <<" ----------------------------" << el;
    string arrayName [ 7] = {"Sun","Mon","Tue","Wed","Thur","Fri","Sat"};
    string* ptr = arrayName;
    for ( int i = 0; i < 7; i++)
    {
        cout <<" "<<ptr[i];
    }

    //days goes here.


return 0;
}


//---------------------------------------------------------------------------
//user defined funtion for returning value month
// defining the function printMonth
void printMonth ( int month)
    {
    // making a switch for 12 months
    switch  ( month)
    {
    case 1:
        cout <<"January";
        break;
    case 2:
        cout <<"February";
        break;
    case 3:
        cout <<"March";
        break;
    case 4:
        cout <<"April";
        break;
    case 5:
        cout <<"May";
        break;
    case 6:
        cout <<"June";
        break;
    case 7:
        cout <<"July";
        break;
    case 8:
        cout <<"August";
        break;
    case 9:
        cout <<"September";
        break;
    case 10:
        cout <<"October";
        break;
    case 11:
        cout <<"November";
        break;
    case 12:
        cout <<"December";
        break;

    default:
        cout <<"Invalid input" << el;  // error to the input month
    }
}
//----------------------------------------------------------------------------
