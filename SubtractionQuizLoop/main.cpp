/*a program that generates five questions and, after a student answers them,
reports the number of correct answers. The program also displays the time spent taking the
test, as shown in the sample run.*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    long startTime = time( 0);    //declaring startTime to start couting in seconds of type long
    srand(time (0));
    const int value = 5;
    int numQuest = 0;
    int corrAnswer = 0;

    do
    {
        int num1 = rand() % 10;
        int num2 = rand() % 10;


        cout <<"\nWhat is " << num1<<" - " << num2 <<" : ";
        int answer;
        cin >> answer;

    if (( num1 - num2 ) == answer)
    {
        cout <<"Correct Answer!\n";
        corrAnswer++;
    }
    else
    {
        cout <<"Wrong answer! " << num1 <<" - " << num2 <<" is " << ( num1 - num2 ) << endl;
    }

        numQuest++;
    } while ( numQuest < value );

    long endTime = time( 0);       //declaring endTime assigned with the time spent from startTime till endTime
    int timeSpent = ( endTime - startTime );

    cout <<"\nYou got " << corrAnswer <<" correct answers" << endl;
    cout <<"And time spent is : " << timeSpent <<" seconds";

}
