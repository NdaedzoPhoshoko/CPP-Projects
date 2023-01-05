#include <iostream>

using namespace std;

int main()
{
  double x,y,z;

  cout<< "Enter three numbers : ";
  cin>>x>>y>>z;

  if(x>=y && x>=z)
    cout<< "Largest number : " <<x;

  if(y>=x && y>=z)
    cout<< "Largest number : " <<y;

  if(z>=x && z>=y)
    cout<< "Largest number : " <<z;

  return 0;
}


