#include <iostream>

using namespace std;

class Cylinder{
public:

    double Radius;
    double Volume;
    double Height;
    double SurfaceArea;

    void MyFunction();

};


void Cylinder::MyFunction()
{

    Volume = (3.14) * (Radius * Radius) * Height;
    SurfaceArea = 2 * (3.14) * Radius * ( Height + Radius);

    cout<<" Volume = "<<Volume;
    cout<<"\n Surface Area = "<<SurfaceArea;
}

int main()
{
    Cylinder obj1;

    obj1.Radius = 2.5;
    obj1.Height = 5.5;

  obj1.MyFunction();

return 0;
}
