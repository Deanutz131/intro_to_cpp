#include <iostream>
#include <fstream>

using namespace std;

/*********************************************************************
File name: file_io_example.cpp
Author: David Patrick
Date: 09/08/2023

Purpose:
   Program to read an input file and write to an output file
Command Parameters:
   N/A
Input:
   numbers.txt
Results:
   Creates output.txt 
Notes:
   Assumes the file numbers.txt already exists.
   Each number is on its own line.
*********************************************************************/
int main()
{
    // Create Variables
    ifstream fileInput;
    ofstream fileOutput;

    int iNum1, iNum2, iSum;

    // Open files
    fileInput.open("numbers.txt");
    fileOutput.open("output.txt");

    // Read the file
    cout << "Reading two integers" << endl;
    fileInput >> iNum1;
    fileInput >> iNum2;

    // Ouput numbers to file
    fileOutput << "Number 1: " << iNum1 << endl;
    fileOutput << "Number 2: " << iNum2 << endl;
    
    // Add the numbers
    iSum = iNum1 + iNum2;

    // Output sum to file
    fileOutput << "Total Sum: " << iSum << endl;

    // Close the files
    fileInput.close();
    fileOutput.close();

    return 0;
}