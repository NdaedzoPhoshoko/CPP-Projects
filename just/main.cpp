#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand((int)time(0));
    int a = rand();
    int r = a % 2;
    cout<<"the randomly selected integer is : ";
    cout <<a<<" \n"<<"The remainder is : ";
    cout<<r;
    return 0;
}
