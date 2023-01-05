#include <iostream>

using namespace std;

int main()
{
    cout <<"This program is for Greatest Common Divisor" <<endl;
    int gcd = 1;
    int num1, num2;
    int com = 2;

    cout <<"Enter first integer number : ";
    cin >> num1;   //e.g 12
    cout <<"Enter second interger number : ";
    cin >> num2;   //e.g 6

    while ( com <= num1 && com <= num2 )
    {
        if ( num1 % com == 0 && num2 % com == 0)
        {
            gcd = com;
        }
            com++;
    }

    cout <<"The Greatest Common Divisor for "
         << num1 <<" and  " << num2 <<" is "
         << gcd;

    return 0;
}
