#include <iostream>
using namespace std;

//declaring the menu function
void showmenu();

//declaring the functions for the weekdays timetable
void moday(string* modulesArg1, string* venuesArg1);

void tuesday(string* modulesArg2, string* venuesArg2);

void wednesday(string* modulesArg3, string* venuesArg3);

void thursday(string* modulesArg4, string* venuesArg4);

void friday(string* modulesArg5, string* venuesArg5);

int main()
{

  string modules[] = {"SCSC","SMTH","SHELL","SSTS", "SAPM"};

  string venues[] = {"TA001","KA003","TB002","KB001", "QA001"};

  string stuff_rooms[] = {"SB ROOM 100","CB ROOM 12","QB ROOM 02","SB ROOM 20"};

	int option;
		showmenu();

		cout << "option: ";
		cin >> option;
		cin.ignore();
		system("cls");

		int display_time_table = 0;

		switch (option)
		{
		case 1:
		{
		cout << modules[0] << " VENUE : " << venues[0] <<"\n";
			cout << modules[3] << " VENUE : " << venues[3] <<"\n";
			cout << modules[4] << " VENUE : " << venues[2] <<"\n";
			cout<< modules[1] << " VENUE : " << venues[4] <<"\n";
			cout<< modules[2] << " VENUE : " << venues[0] <<"\n";
			cout << "**Welcome to Unversity Of Limpopo**\n";
		}
			break;
			case 2:
			{
			//this assignment makes the time table to be displayed if the user chooses option 2
		 display_time_table = 1;
			}
		 break;
		 case 3:
		 {
		   //lecture rooms
		   cout << "\tLecture Rooms\n";
		   cout << "MODULE KEY |  OFFICE\n";
		   cout << modules[3] << "\t  " << stuff_rooms[1] << endl;
		   cout << modules[1] << "\t  " << stuff_rooms[4] << endl;
		   cout << modules[4] << "\t  " << stuff_rooms[3] << endl;
		   cout << modules[2] << "\t  " << stuff_rooms[2] << endl;
		 }
		 break;
		 case 4:
		 {
		 //library here:
            cout << "@Library 1 : (Monday to Wednesday)\n"
                 << "Next to the main tiro hall. The right side of K Block\n\n";
            cout << "@Library 2 : (Wednesday to Saturday)\n"
                 << "Next to the main tiro hall. The right side of K Block, second floor of Library 1\n";
            cout << "do not forget to wear a mask.";
		 }
		 break;

		 default: {
		   cout << "\nIncorrect option, program terminated!!!";
		   return 0;
		  }
		}
		//collect day from the user
		int  day(0);

if( display_time_table == 1)
{
    {
		cout  << "\nWhat day is today?\n"
		          << "use 1 for Monday\n"
		          << "use 2 for Tuesday\n"
		          << "use 3 for Wednesday\n"
		          << "use 4 for Friday\n"
		          << "\tanswer : ";

		          cin >> day;
		          cin.ignore();
		          if( day != 1 && day != 2 && day != 3 && day != 4 && day != 5)
		          {
		          	cout << "\nIncorrect option, program terminated!!!";
		          	return 0;
		          }
		}
			//displaying the time table
    switch( day)
		{
			case 1:
		    {
		    	//monday
		    	cout << endl;
		    	moday( modules, venues);
		    	break;
		    }

			case 2:
			{
				//tuesday
				cout << endl;
				tuesday( modules, venues);
				break;
			}

			case 3:
			{
				//wednesday
				wednesday( modules, venues);
			}
			break;
			case 4:
			{
				//thursday
				thursday( modules, venues);
			}
			break;
			case 5:
			{
				//friday
				friday( modules, venues);
			}
			break;

			default:
			{
				//this option will not be considered for now
				cout << "Oops!! ";
				return 0;
			}
		}
}

	return 0;
}

//definition of the show menu functions
void showmenu()
{
	cout << " **COMPUTER SCIENCE**\n";
	cout << "1.SUBJECTS VENUES\n";
	cout << "2.TIMETABLE\n";
	cout << "3.LECTURE ROOM\n";
	cout << "4.LIBRARY\n";
	cout << "**Welcome to Unversity Of Limpopo**\n";
	cout << "\n";
}

//definition of the weekday time tables
void moday(string* modulesArg1, string* venuesArg1)
{
    cout << "\tTime-Table for Monday\n";
	cout << modulesArg1[0] << " VENUE : " << venuesArg1[0] <<"\n";
			cout << modulesArg1[3] << " VENUE : " << venuesArg1[3] <<"\n";
			cout << modulesArg1[4] << " VENUE : " << venuesArg1[2] <<"\n";
}

void tuesday(string* modulesArg2, string* venuesArg2)
{
    cout << "\tTime-Table for Tuesday\n";
	cout << modulesArg2[3] << " VENUE : " << venuesArg2[3] <<"\n";
			cout << modulesArg2[4] << " VENUE : " << venuesArg2[2] <<"\n";
			cout<< modulesArg2[1] << " VENUE : " << venuesArg2[4] <<"\n";
}

void wednesday(string* modulesArg3, string* venuesArg3)
{
    cout << "\tTime-Table for Wednesday\n";
	cout << modulesArg3[0] << " VENUE : " << venuesArg3[0] <<"\n";
			cout << modulesArg3[3] << " VENUE : " << venuesArg3[3] <<"\n";
			cout << modulesArg3[4] << " VENUE : " << venuesArg3[2] <<"\n";
			cout<< modulesArg3[1] << " VENUE : " << venuesArg3[4] <<"\n";
}

void thursday(string* modulesArg4, string* venuesArg4)
{
    cout << "\tTime-Table for Thursday\n";
	cout << modulesArg4[3] << " VENUE : " << venuesArg4[3] <<"\n";
}

void friday(string* modulesArg5, string* venuesArg5)
{
    cout << "\tTime-Table for Friday\n";
	cout<< modulesArg5[1] << " VENUE : " << venuesArg5[4] <<"\n";
			cout<< modulesArg5[2] << " VENUE : " << venuesArg5[0] <<"\n";
}
