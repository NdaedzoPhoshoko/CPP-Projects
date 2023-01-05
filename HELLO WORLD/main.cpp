#include <iostream>
#include <cmath>
using namespace std;

void MyFunc(int P, int m, float i )
{
    int A = pow( (1 + (i / m)) , t * m);
    int c = P * A;
cout<<" ANSWER: "<< c <<endl;
}

int main()
{
    int P, m;
float i;
   cout<<" Enter the principal amount: ";
   cin>> P;
  cout<<"\n Your principal amount is compounded for 1, 2 or 4 times per year?: ";
  cin>> m;
  cout << "\n Enter interest in decimal form : ";
  cin>> i;

 MyFunc(P,t,m,i);

 return 0;
}
