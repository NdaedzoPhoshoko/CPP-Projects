#include <iostream>

using namespace std;

const int Limit = 100;

int main()
{
    int arrayName [ Limit];
    int* ptr = arrayName;

    int num = 0;

    // counting 1 to 100
    loop :
        {
            ptr [ num] = ( num + 1);
            num++;
        }

    while ( num < Limit)
    {
        /*arrayName [ num] = ( num + 1);
        num++;*/
        goto loop;
    }

    // displaying numbers counted
    cout << "Numbers are :\n";
    for ( num = 0; num < Limit; num++)
    {
        cout << ptr [ num] << " ";
    }
    cout << endl;
    // suming up all values(1-100) into var sum
    int sum = 0;
    for ( num = 0; num < Limit; num++)
    {
        sum += ptr [ num];
    }

    // computing their avarage
    int avarage = ( sum / Limit);

    cout << "\nAvarage of numbers is " << avarage << endl;

    //Counting numbers above than the avarage
    num = 0;
    int numAboveAv = 0;

    do
    {
        if ( ptr [ num] > avarage)
        {
            numAboveAv++;
        }
        num++;
    } while ( num < Limit);

    cout << "\nNumbers above avarage are : " << numAboveAv << endl;


  return 0;
}
