#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("C:\\Users\\user\\Desktop\\programming c++\\C++ projects\\How to read and write data in Files using C++\\VhaluvhuSec.txt");
    string message;
    
    if(input.fail())  //if the file does not exist return true
    {
        cout << "File not found";
    }else
    {
        while(!input.eof())  //display the dataof the file
        {
            input >> message;   // extract message from file
            cout << message << " "; //print the message
        }
    }
    
    cout << "\nDone!";
    return 0;
}

//.......display text in a file
/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("C:\\Users\\user\\Desktop\\programming c++\\C++ projects\\How to read and write data in Files using C++\\VhaluvhuSec.txt");
    string message;
    
    while(!input.eof())
    {
        input >> message;   // extract message from file
        cout << message << " "; //print the message
    }

    cout << "\nDone!";
    return 0;
}
*/