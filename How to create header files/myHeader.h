/*
preprocessor wrapper - is a important tool that prevents erros 
                    -of the source code and the code in the header to not be the same

it has such directives 
        #ifndef HEADERNAME_H
        #define HEADERNAME_H
        .
        .//code
        .
        #endif
*/

#ifndef MYHEADER_H
#define MYHEADER_H

class square //class name
{
    public:   //access specifier
          double side;
          double area_calculator();

          void area_Print() //fucntion for displaying the area of a square
          {
              double area = area_calculator(); //assign the results of s*s into the area
              cout << "\nArea of a square is " << area;
          }

};

#endif


