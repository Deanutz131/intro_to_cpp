/*********************************************************************
File name: stringAccess.cpp
Author: <Zach McCall>(<tye2>)
Date: XX/XX/XXXX

Purpose:
   
Command Parameters:
   
Input:
   
Results:
   
Notes:
   Whats up. The purpose of this statement is to be able to pull 
   individual characters from a string. And to use if statements to determine acceptable ranges.
*********************************************************************/

#include <iostream>
using namespace std;

int main()
{
   // index values of the string "Titanic". 
   //  The characters are listed like this.[0,1,2,3,4,5,6]
    string szMovie = "Titanic";
   
   //   I can use this command to determine how many characters are in a string 
   cout << szMovie.length() << endl;
   // define strings
    string szMovie1 = "Titanic";
    string szMovie2 = "Star Wars";

    
   //  There is a good way to do this
   //  Good Way 

    cout << szMovie.at(0) << endl;
    cout << endl;


    //  And a Bad Way 
    cout << szMovie[38] << endl;

   // When using a comparison with strings, the compilier will determine the value based on their ASCII value. 
   // Example
   cout << szMovie2 << endl;


    if (szMovie1 > szMovie2)
    {
        cout << '1' << endl;
    }
    else 
    {
        cout << '2' << endl;
    }
   //  In this cast the ASCII values of the "Titanic" are greater than "Star Wars"


   // This if statement is a good way to determine acceptable ranges of doubles 
   // Ex.

    if (1.000001 - 1.000000001 < 0.001)
    {
        cout << "Hi" << endl;
    }
   //  He will talk about this more in the future
   // DM me if you have any questions on the code

    return 0;
}