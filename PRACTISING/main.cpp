#include <iostream>

using namespace std;

int main()
{
    int value;
    //const int num = 10;

    cout <<"If you want to see first value press 1\n"
         <<"If you want to see first value press 2\n"
         <<"If you want to see first value press 3\n"
         <<"If you want to see first value press 4\n"
         <<"If you want to see first value press 5\n"
         <<"If you want to see first value press 6\n"
         <<"If you want to see first value press 7\n"
         <<"If you want to see first value press 8\n"
         <<"If you want to see first value press 9\n"
         <<"If you want to see first value press 10\n"
         <<"Enter Value : ";
    cin >> value;

    int file [ 10] = { 100, 101, 102, 34, 66, 67, 89, 89, 9, 10};
    int *ptr = file;
    /*for ( int position = 0; position < num; position++ )
    {
         cout <<"Value is : " << *( ptr + position ) <<endl;
    }*/
    int position = --value; //incrementing before value is assigned into position
    cout <<"Value is : " << ptr [ position];

return 0;
}
