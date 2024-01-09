/*********************************************************************
File name: main.cpp
Author: <Zach McCall>(<tye2>)
Date: 09/20/2023

Purpose:
   Making a mad lib
Command Parameters:
   NA
Input:
   Name, hours, school and class
Results:
   A mad lib
Notes:
   NA.
*********************************************************************/
#include <iostream>
using namespace std;

int main() {
    // Declare variables
   string szFirstName;
   int iWholeNumber;
   string szCollegeSubject;
   string szNameOfCollege;
   

    // input values in variables
    cin >> szFirstName;
    cin >> iWholeNumber;
    cin >> szCollegeSubject;
    getline(cin, szNameOfCollege);

    // cout << szFirstName << " " << iWholeNumber << " " << szCollegeSubject << " " << szNameOfCollege << endl;

    // Output madlib
   cout << "My friend " << szFirstName << " is taking " << iWholeNumber << " credits of " << szCollegeSubject << " at" << szNameOfCollege << " this semester. " << endl;
   
   return 0;
}