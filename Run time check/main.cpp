// checking time used to run the program

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t startTime = time(0);

    time_t endTime = startTime;

    cout << endTime;
}
