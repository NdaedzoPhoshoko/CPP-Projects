/*Creating a program that alows the user to enter football player's credentials
credentials are as follows , names in full, age, height and motive
Then display them
( HINT) use Loops and Array
*/

#include <iostream>

using namespace std;



int main()
{
    string name;
    string message;
    bool truth = true;
   while (  truth == true)
    {
        cout << " enter the name";
        cin >> name;

        cin.ignore();
        cout << "\nEnter new message";
        getline( cin, message);

        cout << "Do you want to try again ?";
        string answer;
        cin >> answer;
        if ( answer == "no")
        {
            truth = false;
        } else
        {

            truth = true;
        }

    }






    return 0;
}
