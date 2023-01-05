/*
Author: Phoshoko NP
Date: 27 September 2021
Project: Drawing a shape of a pentagon using loops in C++
*/

/*
Algorithm:
1.
*/

#include <iostream>
#include <iomanip>  //for setw and setfill methods
using namespace std;

int main()
{
    cout << "\nHy, Lets assume that 1cm = 1dot, Whats your length : ";
    int sideLen = 0;
    cin >> sideLen;
    if( sideLen <= 0) //break the program if the length 
    {
        cout << "\nOops, no pentagon for that length!!!\n";
        exit(0);  //return 0; //terminate
    }
    cout << endl;

    int outWidth = sideLen, dotCount = 0, inWidth = 0;
    //firstly lets print the hut of the pentagon, which is the two digonal lines in contrary
    for( ; dotCount < sideLen; dotCount++, outWidth--, inWidth++)
    {
        /*test Example
          Counte   =  0 1 2 3 4 5 6 7 8 9  loop Counter
          outWidth = 10 9 8 7 6 5 4 3 2 1  outside width
          inWidth  =  0 1 2 3 4 5 6 7 8 9 inside width
        */
        cout <<setw(outWidth) << "." << setw(inWidth*2);
        if(inWidth != 0) //avoiding printing two dots on the roof of the hut
        { 
            cout << "." << endl;
        }else{ 
               cout << endl;
             }
    } //now finally the hut is printed,we need to draw the two opposite vertical lines and a single base line horizaontally
    //Of course the inside width will be 18 spaces becuase of setW(inWidth*2) so lets use this inside width to draw the base shape
    inWidth *= 2; //10*2 = 20 inside width but we want 18 so...
    inWidth -= 2; // 20-2 = 18 inside width fine!!!

    //set the dotCount from that 9 back to 0
    for( dotCount = 0; dotCount < (sideLen-1); dotCount++) //for ech side to have 10 dots from last dot of the hut diagonal to the base
    {
        //printing two dots separated by space per row
        if( dotCount != (sideLen-2)) //last row
          {
              cout << "." << setw(inWidth)<< "."<< endl;
          }else{
                  for( int a = 0; a < sideLen; a++)
                  {
                      cout << ". ";
                  }
               }
    }
    
    return 0;
}
