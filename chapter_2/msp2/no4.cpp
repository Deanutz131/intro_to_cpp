/*********************************************************************
File name: main.cpp
Author: <Zach McCall>(<tye2>)
Date: 09/20/2023

Purpose:
    converts volume in metric liters to the American system of cups and ounces
Command Parameters:
    N/A
Input:
    amount in liters
Results:
    Same volume in american cups and ounces. 
Notes:
   N/A
*********************************************************************/
#include <iostream>
using namespace std;

int main() {
    
    // Define Variables
    double dLiters, dCups;
    double dOunces;
    
    // Input Liters
    cin >> dLiters; 
    
    // Equations 
    dOunces = dLiters * 33.814;
    
    // Output
    dCups = dOunces / 8; 
    cout << "Cups: " << static_cast<int>(dCups) << endl;
    dOunces = static_cast<int>(dOunces) % 8;
    cout << "Ounces: " << dOunces << endl;


   return 0;
}