#include <iostream>
#include <sstream>

using namespace std;

struct products {
 string fruit;
 float price;
 };


int main()
{
    products apple, banana;
    string myStr;

    cout << "\nInformation for fruit 1" << endl;
    cout << "Name of the fruit : \a ";
    cin >> myStr;
    stringstream ( myStr) >> apple.fruit;

    cout << "Enter the price : \a ";
    cin >> myStr;
    stringstream ( myStr) >> apple.price;

    cout << "\nInformation for fruit 2" << endl;
    cout << "Name of the fruit : \a ";
    cin >> myStr;
    stringstream ( myStr) >> apple.fruit;

    cout << "Enter the price : \a ";
    cin >> myStr;
    stringstream ( myStr ) >> banana.price;

    cout << "\nDo you want to see the menu : \b ";
    cout << "( hint Y/N) : \a ";
    string answer;
    cin >> myStr;
    stringstream ( myStr) >> answer;

    if ( answer == "Y" || answer == "y")
    {
        cout << "\nMenu." << endl;
        cout << "1 " << apple.fruit << " " << apple.price;
        cout << "2 " << banana.fruit << " " << banana.price;
        cout << "\nThank you." << endl;

    } else if ( answer == "N" || answer == "n")
    {
        cout << "\nThank you." << endl;

    } else
    {
        cout << "\nError input." << endl;
    }

    return 0;
}
