/*You are given an array and some number S.
Determine if any two numbers within	the array sum	to	S.*/
#include <iostream>

using namespace std;

int main()
{
    cout <<"How many integers to input : ";
    int input;
    cin >> input;

    int arrayName [ input];
    int* ptr = arrayName;
    int Count = 0;
    while ( Count < input)
    {
        cout <<"Enter number : ";
        cin >> ptr[ Count];
        Count++;
    }
    cout <<"What is you sum : ";
    int S;
    cin >> S;

for ( int num0 = 0; num0 < input; num0++)
    {
       for ( int num1 = 1; num1 < (input+1); num1)
           {
              if (( ptr[ num0] + ptr[ num1] ) == ( S))
              {
                  cout << ptr[ num0]<< " + "<< ptr[ num1]<< " equals to "<< S<< endl;
              }
              break;
           }
    }
return 0;
}
