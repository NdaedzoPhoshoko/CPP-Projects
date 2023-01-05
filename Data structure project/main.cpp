#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int studentGrade;
    cout <<"How many students do you have : ";
    cin >> studentGrade;

    string array1 [ 2][ studentGrade];
    string* ptr = array1;

    int Count = 0;

    while ( Count < 2)
    {
        int num = 0;
         while ( num < studentGrade)
         {
            cout <<"Enter the name : ";
            cin >> ptr [ Count][ num];
            num++;
         }
         Count++;
    }

    cout <<"GRADE 12 STUDENT NAMES " << endl;
    cout <<"NAMES              " << endl;

    Count = 0;
    while ( Count < 2)
    {
        int num = 0;
         while ( num < studentGrade)
         {
            cout << ptr [ Count][ num] << endl;
            num++;
         }
         Count++;
    }
}
