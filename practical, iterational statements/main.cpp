#include <iostream>
#include <cstring>

using namespace std;

    const int num = 5;
    string name;
    string a, b, c, d, e;
    string aa, bb, cc, dd, ee;

int main()
{
    cout<<"Enter name of first student : ";
   getline( cin, a);
   cout<<"Enter name of second student : ";
   getline( cin, b);
   cout<<"Enter name of third student : ";
   getline( cin, c);
   cout<<"Enter name of fourth student : ";
   getline( cin, d);
   cout<<"Enter name of fifth student : ";
   getline( cin, e);

   string marksFile [ num] = { a, b, c, d, e};

   cout <<"Enter marks of "<< a<<" ";
   getline( cin, aa);
   cout <<"Enter marks of "<< b<<" ";
   getline( cin, bb);
   cout <<"Enter marks of "<< c<<" ";
   getline( cin, cc);
   cout <<"Enter marks of "<< d<<" ";
   getline( cin, dd);
   cout <<"Enter marks of "<< e<<" ";
   getline( cin, ee);

   string storeMarks [ num] = { aa, bb, cc, dd, ee};

   do {
    cout <<"Enter name of student to see their marks" << endl;
    getline( cin, name);

    if ( name == a)
    {
        cout << marksFile [ 0]<<" "<< storeMarks [ 0]<<" "<< endl;
    }
    else if ( name == b)
    {
        cout << marksFile [ 1]<<" "<< storeMarks [ 1]<<" "<< endl;
    }
    else if ( name == c)
    {
        cout << marksFile [ 2]<<" "<< storeMarks [ 2]<<" "<< endl;
    }
    else if ( name == d)
    {
        cout << marksFile [ 3]<<" "<< storeMarks [ 3]<<" "<< endl;
    }
    else if ( name == e)
    {
        cout << marksFile [ 4]<<" "<< storeMarks [ 4]<<" "<< endl;
    }
    else{
            cout <<"\t Error"<< endl;
        }
   }while ( num == 5);
return 0;
}

