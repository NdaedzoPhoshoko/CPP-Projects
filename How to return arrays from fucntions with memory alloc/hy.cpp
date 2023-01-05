#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    srand(time(0));
    int n = rand()% 10 + 1;
    cout << "n = " << n;

return 0;
}