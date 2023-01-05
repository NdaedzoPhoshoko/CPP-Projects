#include <iostream>
#include <cstring>
using namespace std;

/* -Funtion definition
-referencing name
-variable name will accessed through an address*/

void displayName(string &name)
{
    cout <<"What is your name and Surname? "<< endl;
    getline( cin, name);

}

int main()
{
    string name;
    string name_and_surName;

    //name_and_sureName has address to var name
    displayName( name_and_surName);
    cout <<"Your Name and Surname is "<< name_and_surName;

return 0;
}
