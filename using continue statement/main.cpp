#include <iostream>

using namespace std;

int main()
{
    for ( int num = 1, var = 10; num <= var; num++ )
    {
        if ( num == 7)
        {
            continue; // 7 is going to be skipped
        }
        cout << num<<", ";
    }
    return 0;
}
