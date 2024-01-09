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
*********************************************************************/#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    // Create Variables
    int iNum1, iNum2, iSum;
    ifstream fileInput;
    ofstream fileOutput;

    // Open the file
    fileInput.open("numbers.txt");
    fileOutput.open("output.txt");
    
    // Read the file
    cout << "Reading the file";
    fileInput >> iNum1;
    fileInput >> iNum2; 

    // Process information
    iSum = iNum1 + iNum2;

    fileOutput << iSum;


    // Close the file 
    fileInput.close();
    fileOutput.close();
    return 0;
}