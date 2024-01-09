/*********************************************************************
File name: total_square_area.cpp
Author: <Zach McCall>(<tye2>)
Date: 09/06/2023

Purpose:
   Produce a code that can find the area of a square.
Command Parameters:
   N/A
Input:
   The side length of the square
Results:
   The total area of that square 
Notes:
   N/A
*********************************************************************/

#include <iostream>
using namespace std;

int main() 
{
    // defining the integers
   int iUserNum;
   int iUserNumSquared;

   // Tell the user to enter a side length
   cout << "Enter Side Length: ";
   cin >> iUserNum;
   
   // Calculation for the area of a square
   iUserNumSquared = iUserNum * iUserNum;

   //    Output the total are of the square
   cout << "Your square has an Area of " <<  iUserNumSquared << endl;      

   return 0;
}