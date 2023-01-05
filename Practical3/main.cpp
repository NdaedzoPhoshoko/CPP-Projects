/*//create a program that checks if the answer entered by the user is correct

#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string name;
    cout << "Enter your names in full : ";
    getline ( cin, name);

    bool truth;

    cout << "Do you want to see your names : \?";
    string answer;
    getline ( cin, answer);

    if ( answer == "yes")
    {
        truth = true;
    }

    if ( truth == true)
    {
        cout << "Your names are : ";
        cout << name << endl;
    }
    else {
        cout << " Thank you!!!!" << endl;
    }

    return 0;
}
*/

//print out 5 numbers from 1 to 5

#include <iostream>
using namespace std;

int main()
{

    int intNum = 1;
    int Count = 0;
    loop :
        {
            cout << intNum << " ";
            intNum++;
        }
    while ( Count < 5)
    {
        goto loop;
        Count++;
    }

return 0;
}












