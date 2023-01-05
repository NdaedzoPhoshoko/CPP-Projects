//How to write data in a file in C++
/*
The fstream class has a subclass called ofstream

An absolute path is a path that starts from the root of the file system.
example c:\folder\file.txt

an instance of ofstream inserts "<<" data into the file

*/

#include <iostream>
#include <fstream>    //header containing ofstream and ifstream
using namespace std;

int main()
{
    ofstream myObj;     // object for writing
    myObj.open("VhaluvhuSec.txt");   //open a relative text file
    myObj << "Ndaedzo Clement Phoshoko " << 21 << endl;    // writing data to file using the object
    myObj << "Kamogelo Obdurate Mochosi" << " " << 19 << endl;
    myObj << "Tennis Oxlade Riri" << " " << 23 << endl;

    myObj.close(); //closing the relative text file

    cout << "Done!";
    return 0;
}