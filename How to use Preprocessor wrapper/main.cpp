#include <iostream>
#include <mytime.h> //including the mytime header for manipulation of time
#include <iomanip>

//using the class time in mytime for initializing the data members to 0 using the constructor
Time::time()
{
    minute = second = hour = 0;
}

void Time::setTime(int h, int m, int s)
{
   hour = (h >= 0 && h < 12) ? h : 0 ;
   minute = (m >= 0 && m < 59) ? m : 0;
   second = (s >= 0 && s < 59) ? s : 0;
}

void Time::printStandard()
{
    cout << "\nTime is " << setfill('0') << setw(2) << hour << ":"
         << setw(2) << minute << ":" << setw(2) << ":" << second << endl;
}



int main()
{
    setTime(12, 25, 59);
    return 0;
}