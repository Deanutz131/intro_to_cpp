#include <iostream>
#include <iomanip>
using namespace std;

/*********************************************************************
File name: main.cpp
Author: <Your Name Here>
Date: 09/08/2023

Purpose:
   Determine the average number of pets per household
Command Parameters:
   -
Input:
   Pets, Households
Results:
   Average number of pets per household
Notes:
   This program is so we can practice type casting and precision.
*********************************************************************/
int main() 
{
    // declare variables
    int iNumPets, iNumHouses;
    double dAvgPetsPerHouse;

    // user input 
    cout << "Enter Number of Pets: ";
    cin >> iNumPets;

    cout << "Enter Number of Houses: ";
    cin >> iNumHouses;

    // Before casting 
    dAvgPetsPerHouse = iNumPets / iNumHouses;
    cout << "Average pets per house " << dAvgPetsPerHouse << endl;

    // After casting 
    dAvgPetsPerHouse = static_cast<double>(iNumPets) / iNumHouses;
    cout << "Average pets per house " << dAvgPetsPerHouse << endl;
    
    // Format 
    dAvgPetsPerHouse = static_cast<double>(iNumPets) / iNumHouses;
    cout << setprecision(2) << "Average pets per house " << dAvgPetsPerHouse << endl;


    return 0;
}
