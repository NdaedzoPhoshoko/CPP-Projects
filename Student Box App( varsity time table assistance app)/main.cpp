
/*
Create an application that can assist students with the timetable

Why: The timetable distributed is so long, every session so its tough for others to be able to attend their classes.

How to do it: Display a menu that will show 4 options,
option 1 can be the modules of a user
option 2 can be the timetable of the day, example it should ask for the day of the week, then display the time table, correspondence.
option 3 can show the instructors' details, email, office, and modules they teach
option 4 Locate the venue, example ask for a module to locate, then display the venue, time and the module
*/

#include <iostream>

using namespace std;

//declaring global fucntions and variables
string myUserName();
void myMenu();
int myChoice();
int choice;
void myContextSwitch(int answer, string* modules_ptr, int arr_size, string name);
bool yesOrNo();

class myBaseClass
{
public:  //data memebers that are public

    void modules(string* ptr, int arr_size, string name)
    {
        cout << "See a list of your modules below " << name << "\n";
        for( int index = 0, Count = 1 ; index < arr_size; index++, Count++)
        {
            //printing the all the modules
            cout << Count << "." << ptr[index] << endl;
        }
    }
    void instructor_details()
    {
        //function definition
    }
    void test_dates()
    {
        //function definition
    }
    void time_table()
    {
        //function defintion
    }

     myBaseClass()  //constructor for title
    {
        cout << "\tSTUDENT BOX APP\n";
    }

    void titleFunction()
    {
        cout << "\tSTUDENT BOX APP\n";
    }


} myObject;



int main()
{
    //start here...
   string nameOfUser = myUserName();  //collecting user's name

      //modules of user
   string arr_Modules[] = { "SCOA","SSTA","SMTA"};
   int arraySize = sizeof(arr_Modules)/sizeof(arr_Modules[0]);

bool truth1 = true;
while( truth1 == true)
{
   //displaying the menu
   myMenu();
   cout << "\nplease answer with numbers from 1 to 4\n";
   //collecting the option
   int option = myChoice();

   myObject.titleFunction();//title

   //responding towards the user's choice for modules, timetable, venues, details, test dates.
   myContextSwitch(option, arr_Modules, arraySize, nameOfUser);
   cout << "\nDo you want to try again ? ( enter 1 for yes or 2 for no)\n";
   truth1 = yesOrNo();  //accepts the choice from the user

}
   //end here...
   return 0;
}
//definition of the userName function
string myUserName()
{
    cout << "Enter your name so that i may easily recorgnise you : ";
    string userName;
    getline( cin, userName);
    system("cls");
    cout << "\nHy, " << userName << ", welcome to Student Box App\n";
    return userName;
}

//definition of the menu function
void myMenu()
{
    cout << "     MENU\n"
         << "1.MY MODULES\n"
         << "2.MY TIME-TABLE\n"
         << "3.INSTRUCTOR'S DETAILS\n"
         << "4.TEST DATES\n";
}

int myChoice()
{
    bool truth = true;
   while( truth == true)
    {
        cout << "\t enter choice : ";
        cin >> choice;
        cin.ignore();
           if( choice ==1 || choice == 2 || choice == 3 || choice == 4)
           {
              //if the user enters a correct choice, the program shall continue
              truth = false;
              system("cls");
            }else
               {
                  //else return to collecting the correct value for choice
                 cout << "\nerror, enter correct choice\n";
               }

    }

  return choice;
}

void myContextSwitch(int answer, string* modules_ptr, int arr_size, string name)
{
       //modules, timetables, INSTRUCTOR'S DETAILS, venues here
   switch(answer)
   {
       case 1:
        {
            //modules
            myObject.modules(modules_ptr, arr_size, name);

        }break;

       case 2:
        {
            //timetables
        }break;

       case 3:
        {
            //instructor's details
        }break;

       case 4:
        {
            //test dates
        }


       default:
        {
            /*
            this part will not be considered
            *since the option for cases will always be restricted to 1 to 4
            */
        }
   }
}

bool yesOrNo()
{
    bool truth = true;
    bool control = true;
   while( truth == true)
    {
        cout << "\t enter choice : ";
        cin >> choice;
        cin.ignore();
           if( choice ==1)
           {
              //if the user enters a correct choice, the program shall continue
              truth = false;  //breaks the loop if the user says yes
              control = true;  //makes the main program to keep on performing
              system("cls");
            }else if( choice == 2)
            {
                cout << "\n\t...THANK YOU...";
                truth = false;  //breaks the loop if the user says no
                control = false;  //makes the main program to break
            }else
               {
                  //else return to collecting the correct value for choice
                 cout << "\nerror, enter correct choice\n";
               }

    }
  return control;
}
