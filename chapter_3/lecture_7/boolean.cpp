#include <iostream>

using namespace std;
/*********************************************************************
File name: main.cpp
Author: David Patrick
Date: 09/15/2023

Purpose:
   Program to introduce the concepts of Booleans and Ifs
Command Parameters:
   -
Input:
   -
Results:
   Various outputs.
Notes:
   -
*********************************************************************/
int main()
{
    // Boolean
    bool bIsEven = false;
    int iX;

    cout << "Enter x: " << endl;

    cin >> iX;

    
    // print
   
    // conditional
    if(iX % 3 == 0)
    // body needs curly brackets 
    {
        bIsEven = true;
        cout << "The number is a Multiple of 3" << endl;
    }
    else
    { 
        bIsEven = false;
        cout << "The number is not a multiple of 3" << endl;
    }
    return 0;
}