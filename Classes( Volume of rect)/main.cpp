#include <iostream>

using namespace std;

class rectangle1        //class name
{
public:                  //access identifier
    double length;        // data member
    double width;
    double height;
    double VolRect;

    void VolumeOfRect()   //member function
    {
        VolRect = length * width * height;
        cout<<VolRect<<endl;
    }

};

int main()
{
    double l, h, w;      //declaring variables for input values
    cout<<"Enter the length"<<endl;
    cin>> l;                //keyboard extract length
    cout<<"Enter the height"<<endl;
    cin>> h;                //keyboard extract hight
    cout<<"Enter the width"<<endl;
    cin>> w;                 //keyboard extract width

    rectangle1 rect1;     // declare an object rect1 with the user-defined date type name class
    rect1.length = l;   // initialize the variables
    rect1.height = h;
    rect1.width = w;

    rect1.VolumeOfRect();   // Calling out The member function to give results

 return 0;
}
