#include <iostream>

using namespace std;

char el = '\n';

int main()
{
    int m, num;
    cout <<"Five triangular numbers from"
         <<" m = 1 to m = 5 are :" << el;

    for ( int i = 0; i < 75; i++)
    {
      num = ( m * ( m + 1) ) / 2;
      cout << num;
      cout <<" ,";
    }

    return 0;
}
