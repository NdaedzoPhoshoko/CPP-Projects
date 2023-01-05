#include <iostream>
using namespace std; //to access the in-/out- put streams

#ifndef STACK_H
#define STACK_H

class Stack
{
    public:
    int size;
    int bucket[1000]; //bucket array for integer values

    int getSize() const; //the read-only memory method that returns the size 
    int pop() const; //the read-only memory method for getting the top of stack
    int getElement(int index); //non-read only memory for getting the index
    void push(int value); //non read only memory
    string empty() const; //the read-only memory method for validating if the stack is empty
    void clear(); //method that clears the stack

    Stack(); //constructor for class stack
    
};

Stack::Stack()
{
    size = 0; //init the size is zero
    //the constructor intializes the size of the array on stack
}
int Stack::getSize() const
{
    return size;
}
string Stack::empty() const
{
    return (size == 0)? "True" : "False";   //same to  return size == 0 
}
int Stack::pop() const
{
    if(size == 0)
    {
        cout << "No more Integers!...";
        return 0;
    }
    return bucket[size-1];  //removes the last integer from stack
}
void Stack::push(int value)
{
    bucket[size] = value; //add new integer to the end of stack
    /*
    Each time push() is envoked, it increases te size of the stack, in order to insert the next element in the bucket
    */
     size++;
}
int Stack::getElement(int index)
{
    if(index >= size || index < 0)
    {
        cout << "Index ouf range!...";
        return 0;
    }
    return bucket[index];
}
void Stack::clear()
{
    size = 0;
}

#endif  //terminating the #ifndef preprocessor wrapper
