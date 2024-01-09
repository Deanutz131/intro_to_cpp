/*********************************************************************
File name: lecture_4.cpp
Author: <Zach McCall>(<tye2>)
Date: XX/XX/XXXX

Purpose:
   Lecture 4 
Command Parameters:
   Description of the parameters to main().
Input:
   Description of the input to the program.
Results:
   Description of what the program produces.
Notes:
   Description of any special information regarding this program.
*********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int iX, iY, iA, iB, iC, iD, iE;
    iX = 6;
    iE = 4;

    //(Parenthesis)//
    // (iX);
    //(Postfix Increment <Add 1>)//
    // iX++;
    //(Postfix Decrement <Subtract 1>)//
    // iX--;

    // (Multiplication),(Division),(Modulus Division <division w/ only the remainder>)
    iA = iX * 3;
    iB = iX / 3;
    iE = iX % 3;
    // (Addition)(Subtraction)//
    iC = iX + 3;
    iD = iX - 3;
    cout << iA << " " << iB << " " << iC << " " << iD << " " << iE;

    //(Assignments)//
        //(Direct Assignment)//
        iY = 6;
        cout << iY;
        cout << endl;
        //(Addition Assignment)//
        iY += 3;
        cout << iY;
        cout << endl;
        //(Subtraction Assignment)//
        iY -= 3;
        cout << iY;
        cout << endl;
        //(Multiplication Assignment)//
        iY *= 3;
        cout << iY;
        cout << endl;
        //(Division Assignment)//
        iY /= 3;
        cout << iY;

    return 0;
}