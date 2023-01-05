#include <iostream>
using namespace std;  

#ifndef GENERICSTACK_H
#define GENERICSTACK_H

template<typename T>
class Stack
{
    public:
    int size;
    T bucket[1000];  //avoid zero initialization, operation not allowed for strings  

    int getSize() const;  
    T pop() const;  
    T getElement(int index);  
    void push(T value);  
    string empty() const;  
    void clear();  

    Stack();  
    
};

/*
Note that each fucntion shall succeed the template prefix on all functions and classes
Its a principle, each function uses its own template above
*/
template<typename T>
Stack<T>::Stack()
{
    size = 0;  
     
}
template<typename T>
int Stack<T>::getSize() const
{
    return size;
}
template<typename T>
string Stack<T>::empty() const
{
    return (size == 0)? "True" : "False";    
}
template<typename T>
T Stack<T>::pop() const
{
    if(size == 0)
    {
        cout << "No more Integers!...";
        return 0;
    }
    return bucket[size-1];   
}
template<typename T>
void Stack<T>::push(T value)
{
    bucket[size] = value;  
    /*
    Each time push() is envoked, it increases te size of the stack, in order to insert the next element in the bucket
    */
     size++;
}
template<typename T>
T Stack<T>::getElement(int index)
{
    if(index >= size || index < 0)
    {
        cout << "Index ouf range!...";
        return 0;
    }
    return bucket[index];
}
template<typename T>
void Stack<T>::clear()
{
    size = 0;
}

#endif   
