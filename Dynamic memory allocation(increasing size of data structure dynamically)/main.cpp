#include <iostream>
#include "Pseudo.h"
using namespace std;

int main()
{
    Pseudo myObject;

    myObject.add(12);
    myObject.add(-12);
    myObject.add(100);
    myObject.add(-100);
    myObject.add(12);
    myObject.add(-12);
    
    myObject.add(100);
    myObject.add(-100);
    myObject.add(12);
    myObject.add(-12);
    myObject.add(100);
    myObject.add(-100);
    myObject.add(12);
    myObject.add(-12);
    myObject.add(100);
    myObject.add(-100);
    

    for(int i = 0; i < myObject.getSize(); i++)
    {
        cout << myObject.getElement(i) << ", ";
    }
    cout << endl << "Size = " << myObject.getSize();
    
    cout << endl << "empty? " << myObject.empty() << endl;
     cout << endl << "element " << myObject.getElement(13);
    
    return 0;  
}

/*
if(myObject.getSize() == 0)
    {
        cout << "Bucket is empty!";
    }
*/