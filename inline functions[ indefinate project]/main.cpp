//program for bread price and tax charge of 2 rands
#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;


inline int myFunc ( int num1, int taxCharge = 2)
{
    return ( num1 + taxCharge);
}

int main()
{
    cout <<"Enter the price of the bread : ";
    int price;
    string breadPrice;
    cin >> breadPrice;    //extract input using breadPrice
    stringstream ( breadPrice) >> price;  //extract contents to price

    cout <<"Total price of bread with taxation charge is : ";
    cout << myFunc (price );   // price is a copy to parameter num1
                                //with num2 being passed default
    cout <<" rands";
return 0;
}
