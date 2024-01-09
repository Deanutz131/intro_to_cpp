/*********************************************************************
File name: example.cpp
Author: <Zach McCall>(<tye2>)
Date: XX/XX/XXXX

Purpose:
   Learn strings 
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
    string sFirstName, sLastName;

    cout << "Enter First Name: " << endl;
    // cin >> sFirstName;
    // to get take the whole line use this instead.
    getline (cin, sFirstName);

    cout << "Enter Last Name: " << endl;
    cin >> sLastName;
    


    return 0;
}