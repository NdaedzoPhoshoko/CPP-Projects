#include <iostream>
#include <windows.h>
using namespace std;

int load;

//create a class myVenueDetails
class myVenueDetails
{
    //memeber variables that are public
public:
    string moduleName;
    int weekDay;

    //member function that prints vanue with its time
    void myVenueFunction(string module, string Venuelocation)
    {
        cout << "\nPlease go attend " << module
             << " at venue : " << Venuelocation;
    }

}myObject;

int main()
{

    system("color 4F"); //giving color

    cout << "\t\tWELCOM TO FIND MY VENUE\n";

    //array that contains the modules
    string moduleArray[] = { "SCSC021(L)","SSTS021(L)", "SMTH012(L)", "SMTH012(T)", "SSTS012(T)", "SCSC012(T)"};
    //an array that stores the venue names
    string venueNames[] = { "BLOCK KA001", "BLOCK TA001", "BLOCK QA001", "SEMINAR ROOM TA001", "SEMINAR ROOM TB002"};

    //control for repeatition
bool i_control = true;
while ( i_control == true)
{

bool i = true;
while( i == true)
    {

    //ask the user for the weekday
    cout << "What is the weekday ?\n";
    cout << "Enter 1 for MONDAY"
         << "\nEnter 2 for TUESDAY"
         << "\nEnter 3 for WEDNESDAY"
         << "\nEnter 4 for THURSDAY"
         << "\nEnter 5 for FRIDAY\n";

    //asking the user for the weekday
    cout << "\t  enswer : ";
    cin >> myObject.weekDay;
    cin.ignore();

    //loading bar
if( myObject.weekDay == 1 || myObject.weekDay == 2 ||
    myObject.weekDay == 3 || myObject.weekDay == 4 ||
    myObject.weekDay == 5)
 {
    Sleep(500);
    //system("cls");
    cout << "Wait, system loading";
    load = 0;
    do
    {
        Sleep(900);
        cout << ".";
        load++;
    }while(load < 5);
    Sleep(500);
    //system("cls");
    cout << endl<<endl;
 }

    //printing the timetable of the day
    switch(myObject.weekDay)
    {
    case 1: //monday
        {
                system("cls");
            cout << "\n\t  TIME TABLE FOR MONDAY\n"
                 << "\t  MODULE \t TIME( HOURS)\n"
                 << "\t "<<moduleArray[0]<<" \t 07:20\n"
                 << "\t "<<moduleArray[2]<<" \t 09:20\n"
                 << "\t "<<moduleArray[1]<<" \t 12:40\n";
            i = false;
            break;
        }
    case 2:  //tuesday
        {
            system("cls");
            cout << "\n\t  TIME TABLE FOR TUESDAY\n"
                 << "\t  MODULE \t TIME( HOURS)\n"
                 << "\t "<<moduleArray[2]<<" \t 07:20\n"
                 << "\t "<<moduleArray[1]<<" \t 09:20\n"
                 << "\t "<<moduleArray[5]<<" \t 12:40\n";
            i = false;
            break;
        }
    case 3:  //wednesday
        {
            system("cls");
            cout << "\n\t  TIME TABLE FOR WEDNESDAY\n"
                 << "\t  MODULE \t TIME( HOURS)\n"
                 << "\t "<<moduleArray[2]<<" \t 09:20\n"
                 << "\t "<<moduleArray[3]<<" \t 14:20\n";
            i = false;
            break;
        }
    case 4:  //thursday
        {
            system("cls");
            cout << "\n\t  TIME TABLE FOR THURSDAY\n"
                 << "\t  MODULE \t TIME( HOURS)\n"
                 << "\t "<<moduleArray[1]<<" \t 07:20\n"
                 << "\t "<<moduleArray[0]<<" \t 14:20\n";
            i = false;
            break;
        }
    case 5:  //friday
        {
            system("cls");
            cout << "\n\t  TIME TABLE FOR FIRDAY\n"
                 << "\t  MODULE \t TIME( HOURS)\n"
                 << "\t "<<moduleArray[1]<<" \t 09:20\n"
                 << "\t "<<moduleArray[2]<<" \t 12:40\n"
                 << "\t "<<moduleArray[4]<<" \t 14:20\n";
            i = false;
            break;
        }
    default:
        {
            system("cls");
            cout << "\nNo day found, please enter a proper day !!!!\n\n";
            i = true;
        }

    }
}

    //displaying the module's venue
    bool a(true), b(true), c(true), d(true), e(true);

    int userModuleNumber;

    switch(myObject.weekDay)
    {
    case 1:  //monday
        {
            while( a == true)
            {
            //Ask the user for the student module
    cout << "\nFind My Venue for:\n"
         << "Enter 1 for "<<moduleArray[0]<<"\n"
         << "Enter 2 for "<<moduleArray[1]<<"\n"
         << "Enter 3 for "<<moduleArray[2]<<"\n"
         << "\tenter answer : ";
    cin >> userModuleNumber;
    cin.ignore();
            if( userModuleNumber ==1)
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber-1],venueNames[userModuleNumber-1]);
                 a = false;
             }else if (userModuleNumber==2 )
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber-1],venueNames[userModuleNumber-1]);
                 a = false;
             }else if(userModuleNumber==3)
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber-1],venueNames[userModuleNumber-1]);
                 a = false;
             }else
             {
                 cout << "\nWrong option, Try to enter a correct choice!!!\n";
                 a = true;
             }
            }
        }
            break;
    case 2:  //tuesday
        {
         while( b == true)
         {
            //Ask the user for the student module
    cout << "\nFind My Venue for:\n"
         << "Enter 1 for "<<moduleArray[2]<<"\n"
         << "Enter 2 for "<<moduleArray[1]<<"\n"
         << "Enter 3 for "<<moduleArray[5]<<"\n"
         << "\tenter answer : ";
    cin >> userModuleNumber;
    cin.ignore();
            if( userModuleNumber ==1)
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber-1],venueNames[userModuleNumber-1]);
                 b = false;
             }else if (userModuleNumber==2 )
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber-1],venueNames[userModuleNumber-1]);
                 b = false;
             }else if(userModuleNumber==3)
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber-1],venueNames[userModuleNumber-1]);
                 b = false;
             }else
             {
                 cout << "\nWrong option, Try to enter a correct choice!!!\n";
                 b = true;
             }
         }
        }
            break;
    case 3: //wednesday
        {
            while( c == true)
            {
            //Ask the user for the student module
    cout << "\nFind My Venue for:\n"
         << "Enter 1 for "<<moduleArray[2]<<"\n"
         << "Enter 2 for "<<moduleArray[3]<<"\n"
         << "\tenter answer : ";
    cin >> userModuleNumber;
    cin.ignore();
            if( userModuleNumber ==1)
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber+1],venueNames[userModuleNumber]);
                 c = false;
             }else if (userModuleNumber==2 )
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber+1],venueNames[userModuleNumber+1]);
                 c = false;
             }else
             {
                 cout << "\nWrong option, Try to enter a correct choice!!!\n";
                 c = true;
             }
            }
        }
            break;
    case 4: //thursday
        {
            while( d == true)
            {
            //Ask the user for the student module
    cout << "\nFind My Venue for:\n"
         << "Enter 1 for "<<moduleArray[1]<<"\n"
         << "Enter 2 for "<<moduleArray[2]<<"\n"
         << "\tenter answer : ";
    cin >> userModuleNumber;
    cin.ignore();
            if( userModuleNumber ==1)
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber],venueNames[userModuleNumber]);
                 d = false;
             }else if (userModuleNumber==2 )
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber],venueNames[userModuleNumber]);
                 d = false;
             }else
             {
                 cout << "\nWrong option, Try to enter a correct choice!!!\n";
                 d = true;
             }
            }
        }
            break;
    case 5:
        {
            while( e == true)
            {
            //Ask the user for the student module
    cout << "\nFind My Venue for:\n"
         << "Enter 1 for "<<moduleArray[1]<<"\n"
         << "Enter 2 for "<<moduleArray[2]<<"\n"
         << "Enter 3 for "<<moduleArray[4]<<"\n"
         << "\tenter answer : ";
    cin >> userModuleNumber;
    cin.ignore();
            if( userModuleNumber == 1)
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber],venueNames[userModuleNumber-1]);
                 e = false;
             }else if (userModuleNumber== 2 )
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber],venueNames[userModuleNumber]);
                 e = false;
             }else if(userModuleNumber== 3)
             {
                 myObject.myVenueFunction(moduleArray[userModuleNumber],venueNames[userModuleNumber+1]);
                 e = false;
             }else
             {
                 cout << "\nWrong option, Try to enter a correct choice!!!\n";
                 e = true;
             }
            }
        }
            break;
    default:
        {
            cout << "\nInvalid input!!! Please enter a valid input\n";
        }
    }

   //loading bar
    Sleep(500);
    //system("cls");
    cout << "\nWait, system loading";
    load = 0;
    do
    {
        Sleep(1000);
        cout << ".";
        load++;
    }while(load < 5);
    Sleep(500);
    //system("cls");
    cout << endl<<endl;

   //impelementing the contol
   cout << "Do you want to keep looking ?\n"
        << "Enter 1 for YES\n"
        << "Enter 2 for NO\n";
int i_control2 = 1;
while( i_control2 ==1)
{
   cout << "\t enter answer : ";
    int userAnswer;
    cin >> userAnswer;

    if( userAnswer == 1)
    {
        //...the program repeates
        system("cls");
        cout << "\n\n";
        i_control2 = 10;
    }else if( userAnswer == 2)
    {
        //program terminates
        system("cls");
        cout << "\n\n\t\tThank you.\n\n";
        i_control = false;
        i_control2 = 100;
    }else
    {
        cout << "\nWrong option, Try a proper input!!!\n";
        //ask for the input again!!!
    }
}
}
    //END!!!!!!!!

    return 0;
}

/*
//loading bar
    Sleep(500);
    //system("cls");
    cout << "Wait, system loading";
    load = 0;
    do
    {
        Sleep(1000);
        cout << ".";
        load++;
    }while(load < 5);
    Sleep(500);
    //system("cls");
    cout << endl<<endl;
*/
