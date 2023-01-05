#include <iostream>

#include <cmath>

using namespace std;

void displayPattern ( int n);
char el = '\n';
const int num = 17, condit = 16;
int main()
{
    displayPattern ( 0);
}

void displayPattern ( int n)
{
     string pattern [ num] = { "*1","*2","*3","*","*","*","*","*","*",
                               "*","*","*","*","*","*","*","\0"};
    string* ptr = pattern;
    /*for ( n; n < condit; n++)
    {
        cout << ptr [ n];
    }
    */
    cout << ptr [ n];
}
