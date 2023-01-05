/*
This project studies Generic sort fucntions for sorting the arrays
Generic means comprehend large classes ( simply operating to any data type
Sort is a technique of arranging elements from smaller to larger/ order

for a particular sort function look at the separate project sort.cpp

Lets focus on template/ generic types to avoid doing many sort functions of different types
*/

#include <iostream>
using namespace std;
#include <string.h>

//declaring the template for generic types
template<typename T>  //generic template prefix 

void genericSort(T array[], int size)//sort function passign in t array and the array size
{
    T temp;
    for (int i = 0; i < size; i++)
    {
        T min = array[i]; //assume current array element is minimum
            for (int j = 0; j < size; j++)
            {
                if(min < array[j]) //find the minimum element
                {
                    temp = array[i]; //sorting sorted
                    array[i] = array[j];
                    array[j] = temp;

                }
            }
    }
    for(int Count = 0; Count < size; Count++)
    {
        cout << array[Count] << " ,";
    }
}

//fucntion for collecting the names, numbers or strings
void collection(int sizeOfCollection, int optionOfCollection)
{
    if( optionOfCollection == 1 ) //PHRASES
    {
        string array_element[sizeOfCollection];
        for(int a = 0; a < sizeOfCollection; a++)
        {
            cout << "Enter phrase " << (a+1) << " : ";
            getline(cin, array_element[a]); //collect phrases
        }
            genericSort(array_element, sizeOfCollection);
    }else if( optionOfCollection == 2) //LETTERS
          {
              char array_element[sizeOfCollection];
              for(int a = 0; a < sizeOfCollection; a++)
              {
                  cout << "Enter letter " << (a+1) << " : ";
                 cin >> array_element[a]; //collect letters
              }
                  genericSort(array_element, sizeOfCollection);
                cin.ignore();
          }else if( optionOfCollection == 3) //WORDS
                {
                   string array_element[sizeOfCollection];
                   for(int a = 0; a < sizeOfCollection; a++)
                   {
                       cout << "Enter word " << (a+1) << " : ";
                      cin >> array_element[a]; //collect words
                   }
                       genericSort(array_element, sizeOfCollection);
                    cin.ignore();
          }else if( optionOfCollection == 4) //DECIMALS
          {
              double array_element[sizeOfCollection];
              for(int a = 0; a < sizeOfCollection; a++)
              {
                  cout << "Enter decimal " << (a+1) << " : ";
                 cin >> array_element[a]; //collect decimals
              }
                  genericSort(array_element, sizeOfCollection);
                cin.ignore();
          }else if( optionOfCollection == 5) //INTEGERS
          {
              int array_element[sizeOfCollection];
              for(int a = 0; a < sizeOfCollection; a++)
              {
                  cout << "Enter integer " << (a+1) << " : ";
                 cin >> array_element[a]; //collect integers
              }
                  genericSort(array_element, sizeOfCollection);
                cin.ignore();
          }
}


string* menu()
{
    string static array[5] = { "PHRASES", "LETTERS", "WORDS", "DEIMALS", "INTEGERS"};
    for(int Counter = 0; Counter < 5; Counter++)
    {
        cout << (Counter+1)<< ". " << array[Counter]<< endl;
    }
    cout << endl;

    return array;
}

int main()
{
    //mind this : the local array that has actual data does not have to be of type T, since they specify actual data
     int option;
     int size;
    cout << "\n\tWELCOME\n";
    string* menu_ptr = menu();

    bool truth = true;
  while(truth)
  {
    cout << "option : \a";
    cin >> option;
    cin.ignore();
    if( option >= 1 && option <= 5)
    { truth = false; } //break the loop
    else{
           cout << "\nEnter the valid given options ( 1 to 5)." << endl;
          }  // else keep finding asking for correct answer
  }

    cout << "How many " << menu_ptr[option-1] << " to enter ? ";
    cin >> size;
    cin.ignore();

    collection(size, option);  //compute the collection sort
    return 0;
}

