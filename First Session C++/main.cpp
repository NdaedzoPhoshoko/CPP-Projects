#include <iostream> //file header for input stream and output stream
#include <cstring> // for sentences
#include <sstream> // for stringstream

using namespace std; // contains cout and cin

char NL = '\n';
int Count; // Count is declared as a global variable scope


int main() //main function
{
    //this  var inside the main function are called local variable scope
    int number; // declaring variable number
    float container =  565666.8;  // contains decimal numbers
    double bread = 12.35; // var bread assigned with a double type
    char myChar = 'A';
    string myChar1 = "I am a programmer"; // double quotation marks for strings

    int a = 3, b = 2 ;
    int c ( 2), d ( 4);
    string myStr;
    myStr = "I am a prog....";

    float ab = 12.6, bc = 1;

    cout << " Hy, how old are you\n";
    int myAnswer;
    cin >> myAnswer;  //extract integers, float, double, char from the keyboard, one words

    cout << " Hy, how are you\? \n";
    string answer;
    getline ( cin, answer);  //extract sentence as a whole using cin

    cout << "Enter the ammount in 10th: \a ";
    string myAnswer2;
    cin >> myAnswer2;
    int number3;
    stringstream ( myAnswer2) >> number3;  //converting a string into an integer

return 0;
}

/*#include <iostream>

using namespace std;

int main()
{
    cout << "Subraction of two integers." << endl;
    int a, b, result;
    cout << "Enter the first integer : \a " << endl;
    cin >> a;
    cout << "Enter the second integer : \a " << endl;
    cin >> b;
    result = a - b;

    cout << "\n" << a << " - " << b << " = " << result << endl;

return 0;
}*/

// functions
/*
#include <iostream>
using namespace std; // cout and cin

// making a return type function
// return func has a data type
// return func evaluates to a value


double myFunc ( double a,double b); // a and b are arguments/parameters of type int

int main()
{
    cout << "Enter value : ";
    double num;
    cin >> num;
    cout << "Enter another value : ";
    double num1;
    cin >> num1;
    double answer = myFunc ( num, num1  );
    cout << "answer of " << num << " / " << num1 << " = " << answer << endl;

return 0;
}

double myFunc ( double a,double b)
{

return ( a/b);
}*/
