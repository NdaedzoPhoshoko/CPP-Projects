#include <iostream>
using namespace std;

void selectionSort(double list[], int listSize) ;

int main()
{
    int sizeInt = 7;
    double arrayInt[sizeInt] = { 4, 2, 2, 3, 6, 7, -10}; //test int array
    selectionSort(arrayInt, sizeInt); //passing the array and size to sort

    return 0;
}
 //from the book : Introduction with C++ 3rd Edition by Y.Daniel Liang
void selectionSort(double list[], int listSize) 
 {
 for (int i = 0; i < listSize; i++) 
 {
 // Find the minimum in the list[i..listSize-1]
 double currentMin = list[i];
 int currentMinIndex = i;
 
for (int j = i + 1; j < listSize; j++) 
 {
 if (currentMin > list[j]) 
 {
 currentMin = list[j];
 currentMinIndex = j;
 }
 }
 
 // Swap list[i] with list[currentMinIndex] if necessary
 if (currentMinIndex != i) 
 {
 list[currentMinIndex] = list[i];
 list[i] = currentMin;
 }
 }

for (int k = 0; k < listSize; k++) 
{
    cout << list[k]<< ",";
}
 }
