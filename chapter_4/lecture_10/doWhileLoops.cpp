#include <iostream>

using namespace std;
/*********************************************************************
File name: main.cpp
Author: David Patrick
Date: 10/04/2023

Purpose:
   Program to demonstrate do-while and their usefulness. 
Command Parameters:
   -
Input:
   -
Results:
   Various do-while loops
Notes:
   -
*********************************************************************/
int main()
{
    // Guess the number game
    int iAnswer = 0;
    int iGuess = 0;
    int iNumGuesses = 0;

    // Loop through the Game
    do
    {
        // int iGuess; Variables must be declared outside of ALL loops where the variable is used.
        // Because it's used in the while loop, but declared in the do loop, it is viewed as undefined 
        // in the while loop.

        // the Do section tells us what to do, the While section tells us when we can run the Do. Usuually, it will do something until the condition in the While loop is true.
	// Additionally, the Do will run once before the while is checked.

        // User enters a guess
        cout << "Enter a guess: ";
        cin >> iGuess;

        iNumGuesses += 1;

        // Prompt the user if they are right or wrong
        if(iGuess < iAnswer)
        {
            cout << "Too small. Try again" << endl;
        }

        if (iNumGuesses >= 2)
        {
            cout << "You are out of guesses";
            return -1;
        }
        
    }while(iAnswer != iGuess);

    return 0;
}