
#include <iostream>
using namespace std;

const int N = 3;


//function for slving the puzzle
void puzzle(int init_State[N][N], int fin_State[N][N])
{
    //...
}

int main()
{
     //initial state
    int initial[N][N] = 
    {
        {4,7,2},
        {5,8,1},
        {3,6,0}
     };
    //finale state
     int final[N][N] = {
       {1,2,3},
       {4,0,5},
       {7,8,6}
    };
    
    puzzle(initial, final); //calling the function puzzle
    return 0;
}