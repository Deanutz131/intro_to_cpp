/*********************************************************************
File name: stringAccess.cpp
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
#include <iomanip>
using namespace std;

int main()
{
    // index values of the string "Titanic". The characters are listed like this.[0,1,2,3,4,5,6]
    string szMovie = "Titanic";
    // New Term!!
    // cout << szMovie.size() << endl;

    //  Good Way 
    cout << "****************************" << endl;


    cout << setw(10) << szMovie.at(0) << endl;
    cout << setw(10) << szMovie.at(1) << endl;
    cout << setw(10) << szMovie.at(2) << endl;
    cout << setw(10) << szMovie.at(3) << endl;
    cout << setw(10) << szMovie.at(4) << endl;
    cout << setw(10) << szMovie.at(5) << endl;
    cout << setw(10) << szMovie.at(6) << endl;
    cout << endl;


    //  Bad Way 
    cout << szMovie[38] << endl;

    return 0;
}