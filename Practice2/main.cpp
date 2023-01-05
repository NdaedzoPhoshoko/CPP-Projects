#include <iostream>

using namespace std;

void MyFunc( int varAge, string varName, double varSkill);

int main()
{
    //Ask the user the information
    //1.Ask the user their names in full
    string name;
    cout << "Enter the names in full : ";
    getline ( cin, name);

    //2.Ask the user the age
    int age;
    cout << "Ener the age : ";
    cin >> age;

    //3.Ask the user the skillrate of a spefic job,
    //( hint use decimal) as an input
    double skill;
    cout << "Enter the skill rating ( hint use decimal) : ";
    cin >> skill;

    //We call a void function using its name
    //we pass copies as actual var

    bool truth = true;

    while ( truth == true)
    {
    cout << "\nDo you want to see the information\? ";
    string an;
    cin >> an;
    if( an == "yes" || an == "YES" || an == "YeS" || an == "yeS" || an == "yES" ||an == "YEs" )
    {
        MyFunc( age, name, skill);
        cout << "\nThank you." << endl;
        truth = false;
    } else if ( an == "no" || an == "NO" || an == "nO" || an == "No")
    {
        cout << "\nThank you." << endl;
        truth = false;
    } else {
        cout << "\nError.Wrong option!!!" << endl;
        truth = true;
        }
    }

return 0;
}

void MyFunc( int varAge, string varName, double varSkill)
{
    cout << "Information." << endl;
    cout << "Names in full : ";
    cout << varName << endl;
    cout << "Age is : ";
    cout << varAge << "\n";
    cout << "Skill rating is : ";
    cout << varSkill << endl;

}
