#include <iostream>
#include<string>
using namespace std;

int main()
{
    //declare the variable
    string stn;

    cout<<"Enter the sentence you want to determine its length"<<endl;
    //use getline to get whole input with white space
    getline(cin, stn);
    cout<<"Length of this sentence is: "<<stn.length()<<endl;

return 0;
}
