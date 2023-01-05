#include <iostream> //input and output stream

using namespace std;

int main()
{
    string name;

    cout <<"Enter your names in full ";
    getline( cin, name );
    cout << "Name is " << name << " ";

    return 0;
}
