/*The problem is to guess what number a computer has in mind. You will write a program that
randomly generates an integer between 0 and 100, inclusive. The program prompts the user
to enter a number continuously until the number matches the randomly generated number. For
each user input, the program tells the user whether the input is too low or too high, so the user
can make the next guess intelligently*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
    srand( time( 0));
    int num = rand() % 101;

    int tryCount = 0;

    cout <<"Guess the number from 0 to 100";
    cout <<"\nEnter your guess : ";
    int answer;
    cin >> answer;
    tryCount++;

    do {
        if ( answer > num){
            cout <<"Your guess is too high"
                 <<"\n\nContinue guessing : ";
                 cin >> answer;
            tryCount++;
        }
        if ( answer < num){
            cout <<"Your guess is too low"
                 <<"\n\nContinue guessing : ";
                 cin >> answer;
            tryCount++;
        }

    } while ( num != answer);

    cout <<"Yes, the number is : " << num;
    cout <<"\nAnd " << tryCount <<" tries.";

return 0;
}
