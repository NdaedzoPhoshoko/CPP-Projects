/*NOTES
This program uses preprocessor wrapper on the time class program
Preprocessor wrapper- prevent the code in the header from being included in the same source codes
                      more than once.
                    - is included in the header files
Sincer a class can only be defined onced, using preprocessor wrapper prevents such definition erros
It uses the directives #ifndef className_H
                       #define className_H
                       //code here
                       #endif
Client code accesses public members of a class through - object names
                                                       - object reference
                                                       - object pointers
Arraow (->) Is called a member selection operator, used on pointers to access class members 
Utility function - Is a helping private member function that supports the operation of a class's
                   public members, but it is not intended for use by clients of the class

*/

#ifndef MYTIME_H //prevents multiple inclusions of the header file in the same source code
#define MYTIME_H

class Time
{
  public:
    time(); //constructor
    void setTime( int, int, int); //set hour, minute and seconds
    void printUniversal(); //print time in universal time format
    void printStandard(); //print time in standard format
  private:
    int hour; //0-24 hours
    int minute; //0-59
    int second; //0-59
};

#endif
