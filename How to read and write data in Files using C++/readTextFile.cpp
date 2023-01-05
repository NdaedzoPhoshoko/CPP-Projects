//How to read text file in C++
/*
The fstream class has a subclass called ifstream 
the ifstream is used to read files in C++
It reads through an instance
and this instance uses stream extration operators ">>" to read the file

the instance extracts data piece-by-piece, ignoring the white characters as per word extraction
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input;     //reading object
    input.open("VhaluvhuSec.txt");      //open file
    string firstName, secondName, lastName, a;
    int age;                   //variable to accept data

    input >> firstName >> secondName >> lastName >> age;  // extracting the data from file
    cout << "person 1 : " << firstName << " " << secondName << " " << lastName << " " << age << endl;  //display
    
    input >> firstName >> secondName >> lastName >> age;
    cout << "person 2 : " << firstName << " " << secondName << " " << lastName << " " << age << endl;

    string array[4];
    cout << "person 3: ";
    for( unsigned i = 0; i < 4; i++ )
    input >> array[i];
    for(string each: array)
    cout << each << " ";

    input.close();
    cout << "\nDone!";

    return 0;
}
