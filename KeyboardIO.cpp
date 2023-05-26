#include <iostream>
#include <cmath>
using namespace std;

//function to computer Accumulated finance ammount 
void MyFunc(int P, int m, float i )
{
    int A = pow( (1 + (i / m)) , m);
    int c = P * A;
    cout<<" ANSWER: "<< c <<endl; //text output
}

int main() //ENGINE
{
  //variable declarations
   int P, m;
   float i;
  //collecting user input
   cout<<" Enter the principal amount: ";
   cin>> P;
   cout<<"\n Your principal amount is compounded for 1, 2 or 4 times per year?: ";
   cin>> m;
   cout << "\n Enter interest in decimal form : ";
   cin>> i;

   MyFunc(P,m,i); //calling user-defined functions

 return 0;
}
