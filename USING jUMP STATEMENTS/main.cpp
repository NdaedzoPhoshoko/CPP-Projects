#include <iostream>

using namespace std;

int main()
{
    cout <<"Values of 'a' are:  Values of 'b' are:\n";

    for ( int a = 0, i = 100; a != i; a++, i-- )
    {
        cout << a<<"\t\t\t"<< i<<"\n";
    }
return 0;
}
