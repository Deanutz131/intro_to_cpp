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

    
    
    if (comp_num == 3 && user_num == 3){
        cout << "You both choose: Snake" << endl;
    }
    else if (comp_num == 2 && user_num == 2){
        cout << "You both choose: Frog" << endl;
    }
    else if (comp_num == 1 && user_num == 1){
        cout << "You both choose: Slug" << endl;
    }


    else if ( user_num == 3 && comp_num == 1) {
        cout << "Slug beats Snake: You lose" << endl;
    }
    else if ( user_num == 2 && comp_num == 3) {
        cout << "Snake beats Frog: You lose" << endl;
    }
    else if ( user_num == 1 && comp_num == 2) {
        cout << "Frog beats Slug: You lose" << endl;
    }


    else if (user_num == 3 && comp_num == 2)
    {
         cout << "Snake beats Frog: You lose" << endl;
    }
    else if (user_num == 2 && comp_num == 1)
    {
         cout << "Frog beats Slug: You lose" << endl;
    }
    else if (user_num == 1 && comp_num == 3)
    {
         cout << "Slug beats Snake: You lose" << endl;
    }

    else 
    {
        cout << "Invalid input, Terminating Program" << endl;
    }


    // Exit the program:
    return 0;
}
