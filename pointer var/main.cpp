#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string userName1
    //string userName2;
    string* ptr1;
    //string* ptr2;
    ptr1 = &userName1;
    //ptr2 = &userName2;

    cout<<"Enter your username: ";
    getline( cin, userName1);
    if (userName1 != "")
    {
    cout<<"The address of user stored in memory is: "<< ptr1<< endl;
    }
    else
    {
        cout<<"Error Input!!!";
    }

    /*cout<<"Enter your username: ";
    getline( cin, userName2);
    cout<<"The address of user stored in memory is: "<< ptr2<< endl;*/

return 0;
}
