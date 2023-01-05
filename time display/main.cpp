
#include <iostream>       // this a file header for cout, and endline
#include <time.h>       /* buddy file header for time_t, struct tm, time, localtime, asctime */
using namespace std;     //this one is for the input and output in iostream header

int main ()     //this is called the main function
{
  time_t rawtime;    //do not cram them, but know them bruh
  struct tm * timeinfo;   // this are basics for you to just know them

  time ( &rawtime) ;    // we reference the rawtime, is under the ctime header
  timeinfo = localtime( &rawtime);  //we need the time at our timezone, locally
  cout<< "Shit The current date/time is: "<< asctime (timeinfo)<<" my nigga";

  return 0;
}
