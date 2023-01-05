#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack myObject; //declare object of type Stack

    //push integers in stack
    myObject.push(12);
    myObject.push(1);
    myObject.push(100);
    myObject.push(20);

    cout << "Size of stack : " << myObject.getSize(); //get size of stack
    //cout << "Integer on stack : " << myObject.getElement(2); // get integer from specified index
    //cout << "Integer on top of stack : " << myObject.pop(); //pop integer on top
    //myObject.clear(); //clear all integers from the stack
    //cout << "Stack is empty ? " << myObject.empty(); //validate if whether stack is mpty or not
    return 0;
}