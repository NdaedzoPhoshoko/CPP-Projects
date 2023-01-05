#include <iostream>
using namespace std;
#ifndef Pseudo_H
#define Pseudo_H

class Pseudo
{
    public:
    void add(int intValue);
    Pseudo();   //constructor
    void increaseBucket();
    int getElement(int index) const;
    int getSize() const;  //read only memory that returns size
    ~Pseudo(); //destructor that empty the array bucket
    string empty() const;

    private:
    int* bucket;  //pointer to integers
    int size;
    int capacity;

};

Pseudo::Pseudo()
{
    size = 0, capacity = 10;     //default size
    bucket = new int[capacity];          //allocating new memory space to array bucket
}
//........................
Pseudo::~Pseudo() //destructor for deleting the elements in bucket
{
    delete [] bucket;
    size = 0;
}
//........................
string Pseudo::empty() const
{
    delete [] bucket;   //calls the destructor
    /*
    Note that the destructor is first called when the pointer is deleted
    */
   return (size == 0) ? "true" : "false";  //returns true when the destructor initialized the size of the Pseudo bucket to zero
}
//...........................
//...........
void Pseudo::increaseBucket()
{
    if( size == capacity )
    {
        int* old_bucket = bucket;
        capacity = 2 * capacity;
        bucket = new int[capacity];
        for(int index = 0; index < size; index++) //copy back the elements or bucket = old_bucket;
        {
            bucket[index] = old_bucket[index]; 
        }
        delete [] old_bucket; //empty/delete the old bucket since everything is now copied to the new bucket
    }
}
//.............
void Pseudo::add(int intValue)  //storing the integer value into bucket
{
    increaseBucket();
    bucket[size] = intValue;
    size++;
}

int Pseudo::getElement(int index) const
{
    return bucket[index];
}

int Pseudo::getSize() const
{
    return size;
}
#endif

/*
void Pseudo::display()
{
 for(int Count = 0, tenth = 10; 0 < size; Count++)  //print integers with multiple of 10
    {
        cout << "Number : " << (tenth+10) << endl;
    }
}
*/
/*
void Pseudo::initializer()
{
        size = 0, capacity = 10;     //default size
        bucket = new int[capacity];          //allocating new memory space to array bucket
}
*/

/*
string Pseudo::empty() const  //or try this kind of empty fucntion
{
    for(unsigned b = 0; b < size; b++ )
    {
        bucket[b] = 0;  //masking all elements to zero
    }
  return (bucket[0] == 0)? "true" : "false";
}
*/
