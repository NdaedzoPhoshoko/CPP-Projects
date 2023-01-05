#include <iostream>

using namespace std;

int main()
{
    char el = '\n';

    cout <<"Enter a positive integer less than 15 : ";
    int input;
    cin >> input;

    char x = 'X';

    while ( input == 15 || input > 15)
    {

        cout <<"Error!!! please enter the correct value. " << el;
        cout <<"Enter a positive integer less than 15 : ";
        cin >> input;
    }

    //int sum = 0;
    for ( int read = 0; read < input; read++)
    {
        for ( int Count = 0; Count < input; Count++)
            {
               cout << x;
               //sum += 1;
            }
        cout << el;
    }
    //To see how many characters of X are printed
    //cout <<"sum of " << input <<" * " << input <<" is " << sum;

    return 0;
}
