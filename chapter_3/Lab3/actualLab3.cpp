// PreLab 3 Assignment
//copy and paste into the IDE

// The following is a simple dice roller for a table top game.
// The code to randomly generate a number is provided.
// Don't worry about fully understanding the provided code
// as you will not be tested over it.

// Finish the program by adding requested code marked "ADD HERE"

/*********************************************************************
File name: actualLab3.cpp
Author: <Zach McCall>(<tye2>)
Date: 09/21/2023

Purpose:
   The following is a simple dice roller for a table top game.
Command Parameters:
   N/A
Input:
   None
Results:
   randomly generate a number is provided.
Notes:
   Description of any special information regarding this program.
*********************************************************************/

#include <iostream>
#include <ctime>   // for seeding rand
#include <cstdlib> // C standard library

using namespace std;

int main()
{

        int rand_integer;

        // seeds rand (needed for getting random numbers)
        srand(time(NULL));

        // randomly generates a number 1 - 20 inclusively
        rand_integer = rand() % 20 + 1;

        cout << "You roll a " << rand_integer << ": " << endl;


        // ADD HERE - write an IF statement that prints "CRITICAL HIT!!"
        // if the user rolls a 20
        if (rand_integer == 20)
        {
            cout << "CRITICAL HIT!!" << endl;
        }


        // ADD HERE - write an ELSE IF statement that prints "Attack Strikes"
        // if the user rolls between 11 and 19 inclusive.
        else if (rand_integer >=11 && rand_integer <= 19)
        {
            cout << "Attack Strikes" << endl;
        }


        // ADD HERE - write an ELSE statement that prints "Attack Misses"
        // for any other roll
        else
        {
            cout << "Attack Misses" << endl;
        }


    return 0;
}