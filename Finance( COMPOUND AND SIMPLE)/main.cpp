#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    double a, p, b, e, m, n, i;
    char A, s, c;

    cout<<"Do you want to work out compounded or simple? ";
    cout<<"Enter c for compounded or s for simple"<<endl;
    cin>> A;

 /*if( ch != compounded || ch != simple)
 {
     cout<<"Error!!! Please enter the correct option"<<endl;
 }*/

if( A == c )
    {
        cout<<"Enter the principal amount: ";
        cin>> p;
        cout<<"\n Enter the interest in decimal: ";
        cin>> i;
        cout<<"\n Enter the number of years: ";
        cin>> n;
        cout<<"\n Is the interest for a period of 1, 2, 4? : "<<endl;
        cin>> m;

        b = ( 1 + ( i/m ));     //base
        e = m * n;              //exponent
        cout<<"Accumulated value is: "<< p * (pow( b, e))<<endl;
    }


        if( A == s)
        {
        cout<<"Enter the principal amount: ";
        cin>> p;
        cout<<"\n Enter the interest in decimal: ";
        cin>> i;
        cout<<"\n Enter the number of years: ";
        cin>> n;
        a = p * ( 1 + n * i);
        cout<<"Accumulated value is: "<< a <<endl;
        }
if ( !(A==c) || !(A==s) )
{
    cout<<"Error, wrong option"<<endl;
}
return 0;
}
