/*********************************************************************
File name: main.cpp
Author: <Zach McCall>(<tye2>)
Date: 09/20/2023

Purpose:
    To calculate the percentage of students choosing each answer in a multiple-choice question (A, B, C, or D)
Command Parameters:
    N/A
Input:
    multiple-choice Question choices (A, B, C, or D)
Results:
    Averages in percentof which student choose what answer choice. 
Notes:
   N/A
*********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
 {
   int iA, iB, iC, iD;
   double dAvg, dTotal;

//    Declare Variables
   cin >> iA;
   cin >> iB;
   cin >> iC;
   cin >> iD;

//  Equations and printing averages
   dTotal = iA + iB + iC + iD;

   dAvg = (iA / dTotal) * 100;
   cout << "A: " << fixed << setprecision(1) << dAvg << "%" << endl;

   dAvg = (iB / dTotal) * 100;
   cout << "B: " << fixed << setprecision(1) << dAvg << "%" << endl;

   dAvg = (iC / dTotal) * 100;
   cout << "C: " << fixed << setprecision(1) << dAvg << "%" << endl;

   dAvg = (iD / dTotal) * 100;
   cout << "D: " << fixed << setprecision(1) << dAvg << "%" << endl;


   return 0;
}
