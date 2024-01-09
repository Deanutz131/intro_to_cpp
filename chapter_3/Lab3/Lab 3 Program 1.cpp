//TO-DO: Zach McCall
//TO-DO: 09/22/2023
//CS1428 Lab
//Lab 3
//Description: this program will allow the user to play a game of Slug, Frog
//  Snake against a randomized computer opponent

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int user_num;  //user's choice
    int comp_num;  //computer's choice
    int iSnake = 3;
    int iFrog = 2;
    int iSlug = 1;
    string szAnimalU;
    

    // Generate the computer's choice randomly:
    srand(time(NULL));
    comp_num = rand() % 3 + 1;

    // Get the user's choice:
    cout << "Slug-Frog-Snake Game" << endl
         << " 1. Slug" << endl
         << " 2. Frog" << endl
         << " 3. Snake" << endl
         << "Enter a number : ";
    cin >> user_num;
    cout << endl;


    // TODO: Determine if the user wins, loses, or ties (or enters invalid input):

    if(user_num == iSnake){
        szAnimalU = Snake

    }

    else if( user_num == iFrog){
        
    }

    else if( user_num == iSlug){

    }

    else 
    {
        cout << "Terminating Program" << endl;
    }





    
    if (comp_num == user_num){
        cout << "You both choose:" << : << endl;
    }
    else if (comp_num >= user_num) {
        cout << "The Computer chose: " << : << "You lose" << endl;
    }
    else 
    {
        "You choose: " <<  << " You win!" << endl;
    }


    // Exit the program:
    return 0;
}
