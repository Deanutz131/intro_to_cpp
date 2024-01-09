/*********************************************************************
File name: example.cpp
Author: <Zach McCall>(<tye2>)
Date: XX/XX/XXXX

Purpose:
   Description of the purpose of the program.
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
    int iA, iB, iC;

    cin >> iA;
    cin >> iB;


    iA += iB - iA;

    iC = iB * iA;

    cout << iA << iB << iC << endl;

    return 0;
}