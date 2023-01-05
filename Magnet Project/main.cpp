#include <iostream>
#include <sstream>  //header for conv string to int
#include <windows.h>
using namespace std;


void loadingBar();

int main()
{
    system( "color 4F");  //red background and white foreground

    //1.Collect names of stdents

    cout << "Enter the number of students: ";
    string numberOfStu;
    cin >> numberOfStu;
    int numberOfStudents = 0;
    stringstream(numberOfStu) >> numberOfStudents; //extract string to int
    cin.ignore();

    string myArrayNames[numberOfStudents];
    int Count = 1;
    cout << endl;
    string nameOfStudent = "";

    for(int position = 0; position < numberOfStudents; position++ )
    {
        cout << "Enter Name of Student " << Count << ": ";
        getline( cin, myArrayNames[position]);
        Count++;
    }

    cout << "\nThank you, Please wait for few seconds.....";
    cout.flush(); // moving all output data from temp  to permanent memory

    loadingBar();
    //Sleep(10000); // exection sleep for 10000 milisec( 10 seconds)
    system("cls"); //then clear the system
   //......


    return 0;
}

void loadingBar()
{
    // 0 - black background,
    // A - Green Foreground
    system("color 0A");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t Loading...\n\n");
    printf("\t\t\t\t\t");

    // Print initial loading bar
    for (int i = 0; i < 26; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t");

    // Print loading bar progress
    for (int i = 0; i < 26; i++) {
        printf("%c", b);

        // Sleep for 1 second
        Sleep(1000);
    }}
//example to conv int to string
/*
    int fiveHundread = 500;
    stringstream ss;
    ss << fiveHundread;  //insert fiveHundread to ss
    cout << ss.str();
*/

//designing the system console
/*
    keyword = color
    background = F ( meaning white background)
    foreground = 0 ( meaning black text)
    syntax exmple:
              system( keyword background foreground);
              backgrond foreground shold be a hex number
*/

//using sleep fnction
/*
    function prototype:
           unsigned sleep(unsigned seconds);
    seconds are in miliseconds format
*/
