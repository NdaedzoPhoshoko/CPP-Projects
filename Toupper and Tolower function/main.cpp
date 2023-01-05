#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdio>

using namespace std;

char el = '\n';

int main()
{
    cout << "Enter your names ( in full) : \b";
    char myStr;
    cin >> myStr;
    cout << "Do you want to see the names : \b";
    char myAns;
    cin >> myStr;

    if ( (toupper( myAns)) == "YES")
    {
        cout << "Names are : \b";
        cout << putchar(toupper( myAns));

        cout << "Thank you." << endl;
    } else if ( (toupper( myAns) == "NO")
               {
                   cout << "Thank you." << endl;
               } else {
                         cout << cout << "Error input" << endl;
                      }

return 0;
}
