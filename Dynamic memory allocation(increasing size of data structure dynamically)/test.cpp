/*
Test whether the pointer array elements are deleted using the delete[] operator
It seem to be deleting elements but after everything is done analyzed in the code
*/
#include <iostream>
using namespace std;

int main()
{
    int* bucket = new int[3]; //allocate 3 int memory to pointer bucket
    bucket[0] = 12;
    bucket[1] = 23;
    bucket[2] = -10;
    delete [] bucket;
    
    cout << "integer : " << bucket[];
    return 0;
}