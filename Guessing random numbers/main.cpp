#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

    int rand();
    int t = srand(time(0) % RAND_MAX);
    int remainder;
    remainder = t % 2;
    int input;

int main()
{


    cout<<"Guess whether a number to be generated is odd or Even "<<"\n"<<endl;
    cin>>input;

if(remainder == 0)
    {cout<<"The generated value is"<<t<<"\n"
         <<"You have guessed correct!!!!"<<endl;}
else{cout<<"The generated value is"<<t<<"\n"
          <<"You have guessed incorrect!!!!"<<endl;}

return 0;
}

