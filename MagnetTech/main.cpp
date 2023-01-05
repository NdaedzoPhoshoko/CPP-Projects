#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	//Start...
	//1.Collect student names
	string namesOfStudents[10];

	cout <<"How many students ?( max 10): ";

	int numberOfStudents;
	cin >> numberOfStudents;
	cin.ignore();

	int Count = numberOfStudents;
	int position = 0;
	for( int num =0; num < Count; num++)
	 {
		position++;
		cout << "Enter names of Student " << position<<" : ";
		getline( cin, namesOfStudents[num]);
     }


    cout <<"\nPlease be patient, system loading ";

	 for( int b=0; b < 6; b++)
	  {

	  	Sleep( 500);
	  	cout <<".";
	  }
	  //system( "cls");

	system( "cls");


	//2.Display the menu
	cout << "\n";
	cout <<"\t   MENU";
	cout <<"\n\tStudent Details";
	cout  <<"\n\tStudent Marks";
	cout  <<"\n\tTeacher Comments";
	cout  <<"\n\t....thank you...." << endl;
	cout <<"\n";


	     //edit student details
	     //remove student details
	     //add student details

	     //edit student marks
	     //remove student marks
	     //add student marks

	//End...
	cout <<endl;
	return 0;
}
