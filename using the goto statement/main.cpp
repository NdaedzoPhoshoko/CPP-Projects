#include <iostream>

using namespace std;

int main()
{
    int num = 1;
    const int var = 10;

    loop :
        cout << num<<", ";
        num++;
        if ( num <= var)
        {
            goto loop;
        }

    return 0;
}
