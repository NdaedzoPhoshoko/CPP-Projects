#include <iostream>

using namespace std;

int remainder ( int a, int b)
{
    int c = a % b;
    return (c);

}

int main()
{
    int a, b, d;
    cout <<"Enter first value : ";
    cin >> a;
    cout <<"Enter the second value ";
    cin >> b;

    d = remainder ( a, b);
    cout << d;

return 0;
}
