#include <iostream>

using namespace std;

const int TEN = 10;
void myFunc ( char arrayName1 [ TEN]);

int main()
{
    char arrayName [ TEN] = {'N','D','A','E','D','Z','O','\0'};

    myFunc ( arrayName);
}

void myFunc ( char arrayName1 [ ] )
{
    for ( int n = 0; n < TEN; n++)
    {
        cout << arrayName1 [ n] <<" ";
    }
}
