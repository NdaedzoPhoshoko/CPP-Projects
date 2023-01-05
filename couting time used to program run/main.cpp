#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    long startTime = time( 0);
    cout << "Hello world!" << endl;
    int m = 12;
    int expression = m * 10;
    cout <<"Value of m : "<< m;
    long endTime = time( 0);
    long totalTime = endTime - startTime;
    cout <<"\nTime used to run the program is : "
         << totalTime <<" seconds.";

return 0;
}
