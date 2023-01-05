#include <iostream>
using namespace std;
#include<string>

int main()
{
    string FirstName, LastName, result;

    cout<<" Enter your First Name: "<<endl;
    getline(cin, FirstName);
    cout<<" Enter your Last Name: "<<endl;
    cin>>(cin, LastName);

    result = FirstName + LastName;

    cout<<"The length of the first string after concatenate is: "<<result.length()<<endl;

    return 0;
}
