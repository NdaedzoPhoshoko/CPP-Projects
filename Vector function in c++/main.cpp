#include <iostream>
#include <vector>    //C++ header file for vector class
using namespace std;

vector<char> myFunctionVector(string& expression)    //myFunctionVector returns a vector of characters
{
    vector<char> myVector;
    for(unsigned i = 0; i < expression.length(); i++)
    {
        //if(expression[i] != " ") // error no comparison between pointer and integers
        myVector.push_back(expression[i]);
    }
    return myVector;  //returns a vector of characters 
}

void display(vector<char>& tokens)
{
    int Count = 0;         //display the elements
    do
    {
        cout << tokens.at(Count) << ", ";
        Count++;
    } while ( Count < tokens.size());
}
int main()
{
    cout << "\nEnter the expresssion : ";
    string coll_expression;
    getline( cin, coll_expression);    //accepting the user expression
    
    vector<char> v = myFunctionVector(coll_expression);
    display(v);
    return 0;
}
