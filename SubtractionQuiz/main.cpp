/*Using a loop, you can write the program to let the
user enter an answer of a certain expression until it is correct*/

#include <iostream>
#include <ctime>          // for time func
#include <cstdlib>        // for srand and rand func
using namespace std;

int main()
{
    // generating two random integers
    srand( time( 0));       // setting a seed point as 0
    int num1, num2;
    num1 = rand() % 10;     // generating num1 from 0 to 10
    num2 = rand() % 10;     // generating num2 from 0 to 10;

   /*if ( num1 < num2){
        int tempVar = num1;
        num1 = num2;
        num1 = tempVar;
    } */
    // display expression on screen
    cout <<" What is "<< num1 <<" - "<< num2<< endl;
    int answer;
    cin >> answer;

    while (( num1 - num2 ) != answer){
    cout <<"Wrong Answer!" << endl;
    cout <<"What is "<< num1 <<" - "<< num2<< endl;
    cin >> answer;
    }
    cout <<"Correct Answer!";

return 0;
}
