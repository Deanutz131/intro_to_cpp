/*********************************************************************
File name: main.cpp
Author: <Zach McCall>(<tye2>)
Date: 09/20/2023

Purpose:
   Add the total change together
Command Parameters:
    N/A
Input:
    Input Amount of Quaters, Dimes, Nickels, Pennies.
Results:
    Total change
Notes:
   I know it doesnt like the output because I put prompts on what to input, 
   however I don't see how the user will know what to input if this is the 
   first time they are seeing the code. 
*********************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // define variables
    int iQuarters, iDimes, iNickels, iPennies;
    // dTotal is not an input value because it never takes user input in the code
    double dTotal;

    // Input values
    cin >> iQuarters;
    cin >> iDimes;
    cin >> iNickels;
    cin >> iPennies;
    
    // equation 
    dTotal = (iQuarters * 0.25) + (iDimes * 0.10) + (iNickels * 0.05) + (iPennies * 0.01);

    // print amount of total change 
    cout << "Amount: $" << fixed << setprecision(2) << dTotal << endl;



    return 0;
}