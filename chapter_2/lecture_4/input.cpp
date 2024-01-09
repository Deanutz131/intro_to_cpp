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
    for ( int z; z < 1000;)
    {
        
    int x = 1;
    int y = 1;
    cout << x << endl;
    cout << y << endl;

    z = x + y; 
    z = x;
    cout << z << endl;

    z = x + y; 
    z = y;
    cout << z << endl;
    }
    
    return 18;
}