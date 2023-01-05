#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main()
{
    char guess, odd, even;
    int remainder, r;

    srand((int)time(0));
    int k = rand();

    remainder =  k % 2 ;
    r = remainder;

 cout<<"Guess whether a randomly generated integer would be even or odd. ";
 cin>>guess;

 cout<<" \nRemainder is : "<<r;

if(r == 0)
{
    if(guess = even)
    cout<<"\n Your answer for "<<k<<" is Correct. ";
    else
    cout<<"\n Your answer for "<<k<<" is Incorrect. ";
}
if(r == 1)
{
    if(guess = odd)
    cout<<"\n Your answer for "<<k<<" is Correct. ";
    else
    cout<<"\n Your answer for "<<k<<" is Incorrect. ";
}

/*if(r == 1, guess == even)
    cout<<"\n Your answer for "<<k<<" is Inorrect. ";
else
    cout<<"\n Your answer for "<<k<<" is Incorrect. ";*/

return 0;
}
