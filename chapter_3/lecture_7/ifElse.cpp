/*********************************************************************
File name: ifElse.cpp
Author: <Zach McCall>(<tye2>)
Date: 09/18/2023

Purpose:
   Program to introduce the concepts of Booleans and Ifs .
Command Parameters:
    N/A
Input:
    
Results:
   Execute code due to boolean statements
Notes:
    70 speed limit
*********************************************************************/

/*  
    What up Brody 
    This code is basically just explaining how to use equality/inequalitys 
    In this case we are using traffic speed as the example
*/

#include <iostream>

using namespace std;

int main()
{
    int iSpeed;

    // Input Integer
    cout << " Afternoon son did you know how fast you where going?" << endl;
    cin >> iSpeed;

    // The main body of the If/Else statements

    // Idle car
    // For your initial value, you want to use an if statement 
    if (iSpeed == 0)
    {
        cout << "The car is Idle" << endl;
    }

    // Too slow
    // The purpose of the Else/If is to propose a new condition while negating the last 

    // /Ex.)  The statement 
    // "if (iSpeed != 0)(iSpeed <= 50)" 
    // is the same as what the "else if" statement is saying in the line below*/

    else if (iSpeed <= 50)
    {
        cout << "Too slow Grandma" << endl;
    }

    


    // Speed limit 
    // Each one of the "else if" statement will always negate the "if"

    else if (iSpeed <= 75)
    {
        cout << "Speed limit" << endl;
    }

    // I AM SPEED 
    // When using else, the code is telling the compiler 
    // if none of these conditions are met, then run this else statement.
    else
    {
        cout << "You get a fine" << endl;
    }

    return 0;
}