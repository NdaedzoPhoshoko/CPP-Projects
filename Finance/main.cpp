/*#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int base = 2;
    int exp = 4;

cout<<2 * pow( base, exp);

return 0;
}
*/
#include<iostream>
#include<cmath>
using namespace std;

void MyFunc()
{
  double p, m, t, i;

 cout<< p * ( pow( 1 + ( i / m), t * m));
}

int main()
{
   double p, m, t, i;

cout<<" Enter the principal amount: ";
cin>> p;
cout<<" \n Enter the period of the principal amount: ";
cin>> t;
cout<<" \n Enter the enter the interest rate in decimal: ";
cin>> i;
cout<<" \n Your principal amount is compounded for 1, 2 or 4 times per year?: ";
cin>> m;

MyFunc();

return 0;
}

