#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    string even, odd, guess;
    int gen;
    cout<<"Guess if the number will be even or odd:"<<endl;
    cin>>guess;
    srand(time(0));
    gen = rand();
    if (guess != "even" && guess != "odd")
    {
        cout << "Error, type either EVEN or ODD.";
        return 0;
    }
    cout<<"The randomly generated integer is: "<<gen<<endl;
    cout<<"\n";
    if(guess == "even" && (gen % 2) == 0)
    {
        cout<<"CORRECT"<<"\n";
    }
    else if(guess == "odd" && (gen % 2) != 0 )
    {
        cout<<"CORRECT"<<"\n";
    }
    else
    {
        cout<<"INCORRECT";
    }

return 0;
}
