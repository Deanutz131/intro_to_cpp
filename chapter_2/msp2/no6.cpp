/*********************************************************************
File name: example.cpp
Author: <Zach McCall>(<tye2>)
Date: 09/20/2023

Purpose:
   find the area of a triangle with only knowing its sides 
Command Parameters:
   N/A
Input:
   Sides of a triangle
Results:
   produces the area
Notes:
   N/A
*********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double dA, dB, dC, dS, dArea;

    cin >> dA;
    cin >> dB;
    cin >> dC;

    dS = (dA + dB + dC) / 2;
    // s(s-a)(s-b)(s-c)
    dArea = sqrt((dS) * (dS - dA) * (dS - dB) * (dS - dC));

    cout << "The area of the triangle is: " << fixed << setprecision(3) << dArea << endl;


   return 0;
}
