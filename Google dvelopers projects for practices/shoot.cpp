/*
...................................
Welcome to Artillery.
You are in the middle of a war and being charged by thousands of enemies.
You have one cannon, which you can shoot at any angle.
You only have 10 cannonballs for this target..
Let's begin...

The enemy is 507 feet away!!!
What angle? 25<
You over shot by 445
What angle? 15
You over shot by 114
What angle? 10
You under shot by 82
What angle? 12
You under shot by 2
What angle? 12.01
You hit him!!!
It took you 4 shots.
You have killed 1 enemy.
I see another one, are you ready? (Y/N) n

You killed 1 of the enemy.

The first observation is the introductory text which is displayed once per program execution.
We need a random number generator to define the enemy distance for each round.
We need a mechanism for getting the angle input from the player,
And this is obviously in a loop structure since it repeats until we hit the enemy.
We also need a function for calculating the distance and angle. Finally,
We must keep track of how many shots it took to hit the enemy,
As well as how many enemies we have hit during the program execution

https://developers.google.com/edu/c++/next-steps
.....................................
*/
#include <iostream>
#include <string.h>
#include <ctime>       //for setting seed of srand
using namespace std;

void startUp()
{
    string introduction = "Welcome to Artillery.\n"
                          "You are in the middle of a war and being charged by thousands of enemies.\n"
                          "You have one cannon, which you can shoot at any angle.\n"
                          "You only have 10 cannonballs for this target.\n"
                          "Let's begin...";
    cout << introduction;
}

int enermy_distance()  //enemy distance per shoot
{
    srand(time(0));
    return rand() % 1001;  // random distance at a max of 1000
}

int best_shoot_angle()  //the required angle to shoot the enermy
{
    srand(time(0));
    return rand() % 61;  // 0 to 60 degrees
}

int main()
{
    startUp(); //display introduction
    int goal = best_shoot_angle();
    cout << "\n\nThe enemy is " << enermy_distance() << " away" << endl;

    cout << "What angle? ";
    unsigned angle;
    cin >> angle;
    if(angle > goal)
    {
        cout << "You over shot by " << (goal - angle) << endl;
    }else if(angle < goal)
          {
              cout << "You under shot by " << (angle - angle) << endl;
          } else if(angle == goal)
                {  
                    cout << "You hit him"; 
                } else
                     {
                        cout << "Wrong angle!";
                     }

                     cout << "\n\nangle " << angle << " and goal " << goal;
    return 0;
}