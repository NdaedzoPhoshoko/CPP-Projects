#include <iostream>
using namespace std;

int main()
{
    int x;
    x = 25;
    int *ptr;
    ptr = &x;
//calling a pointer gives the address
    cout <<"Address: "<< ptr<< endl;
//pointer with de-reference
    cout <<"De-reference: "<< *ptr<< endl;

    //modify var x
    *ptr = 100;
    cout <<"New value stored in x is: "<< *ptr<< endl;

return 0;
}
