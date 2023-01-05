#include <iostream>
#include "genericStack.h"
#include <string.h> //include the class of strings for string manipulation
using namespace std;

int main()
{
    //in order to fix the bug of this code, catch the exception
    Stack<string> myObject;  //declare object wrapping strings
    
    //push names to stack
    myObject.push("Ndaedzo");
    myObject.push("Pholoso");
    myObject.push("Clement");
    myObject.push("Portia");
    myObject.push("Bianca");

    cout << "Size of stack : " << myObject.getSize();  
    //cout << "Element on stack : " << myObject.getElement(2);  
    //cout << "Eelement on top of stack : " << myObject.pop();  
    //myObject.clear();  
    //cout << "Stack is empty ? " << myObject.empty();  
    return 0;
}