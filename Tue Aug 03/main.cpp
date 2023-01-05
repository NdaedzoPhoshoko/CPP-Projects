#include <iostream>

using namespace std; //directory standard file

void myFunction( int var, string names)
{
    var = var*2;

    cout <<names << " : " <<var;
}

int main()
{
    cout << "Enter value to multi by 2 : ";
    int a;
    cin >> a;
    cin.ignore();

    cout << "Please enter your names in full : ";
    string myName;
    getline( cin, myName );

    myFunction(a,myName);
    return 0;
}
