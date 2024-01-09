/*********************************************************************
File name: Prelab4.cpp
Author: <Zach McCall>(<tye2>)
Date: 09/29/2023

Purpose:
   Description of the purpose of the program.
Command Parameters:
   Description of the parameters to main().
Input:
   Description of the input to the program.
Results:
   Description of what the program produces.
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

     if (input == 'y' || input == 'Y')
     {
          cout << "You think Sponge Bob is better than Patrick..." << endl;
          answer = "Wrong!";
     }
     else if (input == 'n' || input == 'N')
     {
          cout << "You do not think think Sponge Bob is better than Patrick..." << endl;
          answer = "Correct!" ;
     }
     else
     {
          answer = "Invalid Input.";
     }

     cout << answer << endl;

     return 0;
}