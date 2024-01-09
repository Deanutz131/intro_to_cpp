/*********************************************************************
File name: Prelab4.cpp
Author: <Zach McCall>(<tye2>)
Date: 09/29/2023

Purpose:
   Rewrite the If-Else statement to a switch statement
Command Parameters:
   N/A    
Input:
    Input Y,y,N,n.
Results:
   tells you who is better than who 
Notes:
   Description of any special information regarding this program.
*********************************************************************/

#include <iostream>

using namespace std;

int main()
{
     char input;
     string answer;

     cout << "Is Sponge Bob better than Patrick? ('Y' or 'N')" << endl;
     cin >> input;

     // TODO - Change the following IF-ELSE statement to an
     // equivalent switch statement.

     switch (input)
     {
        case 'y':
        case 'Y':
            cout << "You think Sponge Bob is better than Patrick..." << endl;
            answer = "Wrong!";
            break;
        case 'n':
        case 'N':
            cout << "You do not think think Sponge Bob is better than Patrick..." << endl;
            answer = "Correct!" ;
            break;
        default:
            answer = "Invalid Input.";
            break;
     }

     cout << answer << endl;

     return 0;
}