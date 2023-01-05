/*
*Write c++ program that collects biographic information from the user
*The information should be names in full, age, gender, address, student no, ID,
*....JobSkillRating and height( S for short and T for tall)
*/

#include <iostream>
using namespace std;

int main()
{
    //declare variables to accept information from the user
    string names_in_full;  //for example John Sam Peter
    int age; //highest number that be stored in type int is 2^32
    string gender;
    string address;
    int student_no;
    double ID; //highest number that be stored in type int is 2^64
    float job_skill_rating;
    char height;

    cout << "PROGRAM FOR BIOGRAPHIC INFORMATION!!!\n\n"
         << "Enter names if full : ";
    getline(  cin, names_in_full); //
    cout << "Enter age : ";
    cin >> age;
    cin.ignore();
    cout << "Enter gender : ";
    getline( cin, gender);
    cout << "Enter address : ";
    getline( cin, address);
    cout << "Enter student number : ";
    cin >> student_no;
    cin.ignore();
    cout << "Enter ID : ";
    cin >> ID;
    cin.ignore();
    cout << "Enter skill rating ( from 1.0 to 5.0) : ";
    cin >> job_skill_rating;
    cin.ignore();
    cout << "Enter height (hint  S for short, T for tall) : ";
    cin >> height;
    cin.ignore();
    return 0;
}
