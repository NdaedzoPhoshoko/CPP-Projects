//Program for utilizing the C++ jump statements
//start time 01:27pm

/*
#include <iostream>  //input-stream cin  output-stream cout
using namespace std;

int main()
{
    //
    cout << endl<<endl;
    for(int Counter = 0; Counter<5; Counter++)
    {
        //loop body
        if( Counter == 2)
        {
            break;
        }//this breaks the for loop after printing RUN two times, then continue outside the for loop
        cout << "RUN\n";
    }
//RUN 0
//RUN 1
//RUN 2 //ignore it
   // 3
   // 4
    return 0;
}
*/
/*
//examples nested for loops(loops inside loops)
#include <iostream>
using namespace std;

int main()
{
    //a nested loop that prints out five lines horizonatally
    for( int outerCount = 0; outerCount < 5; outerCount++) //this is the outerloop for jumpinf to the next line
    {
        cout << endl; //jumps to the next line for each line print
        //below is the inner for loop that prints the line
        for( int innerCount = 0; innerCount < 20; innerCount++)
        {
            cout << ".";
        }
    }
    return 0;
}
*/
//output
/*

...................
...................
...................
...................
...................

*/

/*
#include <iostream>
using namespace std;

int main()
{
    
   //code starts here
   //declaring the variables that will store numbers
   double Input_num;
   double sum = 0;
   double average;
   double numbers[5];//declare an array of type double that store any five decimals

   //how to get length of any array
   int numberOfValues = sizeof(numbers[5])/sizeof(numbers[0]);

  //Collecting numbers from the user using a for loop and an array
   for( int index = 0, Count = 1; index < 5 ; index++, Count++)
   {
       cout << "Enter number " << Count << " : ";
       //loop body collecting the numbers one after another
       cin >> numbers[index];  //indexed variable with index 0 1 2 3 4
   }

   //computing the sum
   for ( int index = 0; index < 5; index++)
   {
       sum += numbers[index]; //sum of all indexed variables of numbers
   }

   average = sum/5;
   //display
   cout << "Sum is : " << sum << " and  Avergage is : " << average;

    return 0;
}
*/

/*
//take note of thiss
int summation =0;
summation += a; //incrementing assignment
//assignment( left=right)
summation -= a; //decrementing assignment
summation *= a; //multiple... assignment
summation /= a; //devision assignment

//Take screenshots for this 
a = 1;
b = 0;
b += 1;  // b = b + 1 // b++
b *= 2;  // b = b * 2;
b /= 2;  //b = b / 2;
*/

#include <iostream>
using namespace std;

double sumOfNumbers(double* ptr)
{
    double sum;

    //computing the sum
   for ( int index = 0; index < 5; index++)
   {
       sum += ptr[index]; //sum of all indexed variables of numbers
   }
   return sum;
}

//using functions for performing the same codes

double average(double summing, int size)
{
   return summing/size;
}
int main()
{

   double numbers[5];//declare an array of type double that store any five decimals
    //Collecting numbers from the user using a for loop and an array
   for( int index = 0, Count = 1; index < 5 ; index++, Count++)
   {
       cout << "Enter number " << Count << " : ";
       //loop body collecting the numbers one after another
       cin >> numbers[index];  //indexed variable with index 0 1 2 3 4
   }

   //display
   cout << "Sum is : " << sumOfNumbers(numbers) << " and  Avergage is : " << average(sumOfNumbers(numbers), 5);

    return 0;
}