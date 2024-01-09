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
#include <cmath>
using namespace std;

int main()
{
    int iA, iB, iC;

    cout << "Enter A:";
    cin >> iA;
   

    cout << "Enter B:";
    cin >> iB;
    
    cout << "Enter C:";
    cin >> iC;
   
    
    double dDiscriminate = sqrt(pow(iB, 2)-4 * iA * iC);


    return 0;
}