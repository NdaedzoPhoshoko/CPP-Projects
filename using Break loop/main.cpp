#include <iostream>

using namespace std;

int main()
{
    int num;
    const int number = 10;
    for ( num = 0; num <= number; num++ )
    {
        cout << num<< ", ";
        if ( num == 8)
        {
            cout << "Stopped at 8.";
            break;
        }
    }

return 0;

}
