#include <iostream>
using namespace std;

int main()
{
    cout << "\n\tProgram for Voting\n";
    //collecting age of type integer
    int age;
    cout << "\nEnter age : ";
    cin >> age;

    //requesting for voting with conditional statements
    if( age < 18)
    {
        cout << "You are still young to vote in 2021";
    }else if( age >= 18 && age < 60)
          {
              cout << "You can vote for 2021, please walk yourself to the voting station";
          }else //when the person is 60 or older
             {
                 cout << "You can vote for 2021, and transport will be provided for you to the voting station";
             }
    return 0;
}