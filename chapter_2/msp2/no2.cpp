/*********************************************************************
File name: main.cpp
Author: <Zach McCall>(<tye2>)
Date: 09/20/2023

Purpose:
   TO find the Average speed of the car, 
   and to find the fuel efficiency in miles per gallon 
Command Parameters:
    N/A
Input:
    a. The odometer reading the last time the automobile's tank was filled. 
    b. The current odometer reading. 
    c. The amount of fuel in gallons to refill the tank. 
    d. The number of hours the automobile has been driven.

Results:
    miles per gallon traveled by the automobile since the last time its tank was filled  
    and the average speed driven in miles per hour. 
Notes:
   N/A
*********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
 {
    // Define Variables
    double dOdoLastFill, dOdoCurrent, dFuelRemaining, dNumHrsDrive;
    double dMPG, dMPH;

    // Set inputs
    cin >> dOdoLastFill;
    cin >> dOdoCurrent;
    cin >> dFuelRemaining;
    cin >> dNumHrsDrive;

    // Equations
    dMPG = (dOdoCurrent - dOdoLastFill) / dFuelRemaining;
    dMPH = (dOdoCurrent - dOdoLastFill) / dNumHrsDrive;


    // averages out
    cout << "The fuel efficiency is " <<fixed << setprecision(1) << dMPG << " miles per gallon." << endl;
    cout << "The average speed is " <<fixed << setprecision(1) << dMPH << " miles per hour." << endl;
   
   return 0;
}
