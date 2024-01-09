/*********************************************************************
File name: boolean2.cpp
Author: <Zach McCall>(<tye2>)
Date: XX/XX/XXXX

Purpose:
   Program to introduce the concepts of Booleans and Ifs .
Command Parameters:
    N/A
Input:
    
Results:
   Execute code due to boolean statements
Notes:
   Description of any special information regarding this program.
*********************************************************************/

#include <iostream>

using namespace std;

int main()
{
   string iX = "HELLO";
   string iY = "hello";

   cout << "iX is equal to iY" << endl;
   cout << (iX == iY) << endl;

   cout << "iX is greater than iY" << endl;
   cout << (iX > iY) << endl;

   cout << "iX is greater than or equal to iY" << endl;
   cout << (iX >= iY) << endl;
   
   cout << "iX is less than iY" << endl;
   cout << (iX < iY) << endl;

   cout << "iX is less than or equal to iY" << endl;
   cout << (iX <= iY) << endl;


 

    return 0;
}